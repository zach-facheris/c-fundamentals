#include <stdio.h>

/* TODO: replace both placeholders with real function-like macros.
   CUBE(x) must give x cubed; MAX(a, b) must give the larger of a and b.
   Remember: no trailing semicolon on a #define. */
#define CUBE(x) ((x) * (x) * (x))
#define MAX(a, b) (((a)>(b))?(a):(b))

/* Do not change main: it deliberately passes expressions to your macros. */
int main(void) {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d cubed is %d\n", a, CUBE(a));
    printf("%d cubed is %d\n", a + b, CUBE(a + b));
    printf("%d cubed mod 7 is %d\n", b, CUBE(b) % 7);
    printf("larger plus one is %d\n", MAX(a, b) + 1);
    return 0;
}
