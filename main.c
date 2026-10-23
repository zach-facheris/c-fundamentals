#include <stdio.h>
#include <string.h>

int main(void) {
    /* Already done for you: read one line of text into name and drop the
       Enter key from its end. If there is no input, name stays empty.
       The Strings lesson covers reading lines in detail. */
    char name[256] = "";
    fgets(name, sizeof name, stdin);
    name[strcspn(name, "\r\n")] = '\0';

    /* TODO: print the two lines described in the exercise.
       Use a %s placeholder for name; do not type any name yourself. */

    return 0;
}
