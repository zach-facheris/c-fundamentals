#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

	size_t sum = 0;

    /* TODO: add up the odd numbers 1, 3, 5, ... that are <= n,
       then print the total on one line. */

	for(size_t i = 1; i <= n; i+=2)
	{
		sum += i;
	}

	printf("%zu\n", sum);

    return 0;
}
