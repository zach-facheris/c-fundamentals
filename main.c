#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* given: read one line of stdin into dst without its newline */
void read_line(char *dst)
{
    if (fgets(dst, 256, stdin) == NULL)
    {
        dst[0] = '\0';
        return;
    }
    size_t k = strlen(dst);
    if (k > 0 && dst[k - 1] == '\n')
    {
        dst[k - 1] = '\0';
    }
}

/* given: read a count line, then that many text lines */
int read_batch(char batch[][256])
{
    char head[256];
    read_line(head);
    int count = 0;
    /* sscanf is scanf reading from a string instead of from stdin */
    sscanf(head, "%d", &count);
    if (count < 0)
        count = 0;
    if (count > 60)
        count = 60;
    for (int i = 0; i < count; i++)
    {
        read_line(batch[i]);
    }
    return count;
}

int main(void)
{
    char morning[60][256];
    char evening[60][256];
    int n_morning = read_batch(morning);
    int n_evening = read_batch(evening);
    char path[] = "/tmp/diary.txt";

    /* TODO 1: create the file at `path`, check for NULL, write each of the
       n_morning lines in morning[] on its own line, then close it. */
    FILE *tmp_file = fopen(path, "w");

    if (tmp_file == NULL)
    {
        perror("fopen(tmp_file)");
        return EXIT_FAILURE;
    }

    for (size_t i = 0; i < n_morning; i++)
    {
        if (fprintf(tmp_file, "%s\n", morning[i]) == EOF)
        {
            break;
        }
    }

    if (fclose(tmp_file) == -1)
    {
        perror("fclose(tmp_file)");
        return EXIT_FAILURE;
    }

    /* TODO 2: open the same file again so that the n_evening lines in
       evening[] are added after the morning lines, check for NULL,
       write them, then close it. */
    FILE *tmp_file_a = fopen(path, "a");

    if (tmp_file_a == NULL)
    {
        perror("fopen(tmp_file_a)");
        return EXIT_FAILURE;
    }

    for (size_t i = 0; i < n_evening; i++)
    {
        if (fprintf(tmp_file_a, "%s\n", evening[i]) == EOF)
        {
            break;
        }
    }

    if (fclose(tmp_file_a) == -1)
    {
        perror("fclose(tmp_file_a)");
        return EXIT_FAILURE;
    }

    /* TODO 3: open the file for reading, check for NULL, and print every
       line in it as <number>:<text> (numbered from 1, no newline inside
       the text), close it, then print the total as below. */
    int total = 0;
    char buf[256];

    FILE *tmp_file_r = fopen(path, "r");

    if (tmp_file_r == NULL)
    {
        perror("fopen(tmp_file_r)");
        return EXIT_FAILURE;
    }

    while (fgets(buf, sizeof buf, tmp_file_r) != NULL)
    {
        printf("%d:%s", total + 1, buf);
        total++;
    }

    printf("lines: %d\n", total);

    if (fclose(tmp_file_r) == -1)
    {
        perror("fclose(tmp_file_r)");
        return EXIT_FAILURE;
    }
    return 0;
}
