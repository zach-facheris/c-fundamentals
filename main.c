#include <stdio.h>
#include <string.h>

int main(void) {
    char buf[100] = "";
    fgets(buf, sizeof buf, stdin);

    /* TODO: fgets kept the newline it stopped on, if there was one.
       Remove it so strlen counts only the characters on the line. */

	buf[strcspn(buf, "\n")] = '\0';

    printf("%d\n", (int)strlen(buf));
    return 0;
}
