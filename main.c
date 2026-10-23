#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int sum = 0;
    int n;
    if (scanf("%d", &n) != 1) return 0;

    /* TODO: replace NULL with a malloc call that reserves room for n ints. */
    int *nums = malloc(n * sizeof(int));

    if (nums == NULL) {
        /* TODO: allocation failed: print a message to stderr and return 1. */
        perror("malloc");
        return 1;
    }

    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    /* TODO: print the values from last to first on one line, single spaces between them. */
    for(int i = n - 1; i >= 0; i--)
    {
        sum += nums[i];

        if(i == 0)
        {
            printf("%d", nums[i]);
        }
        else
        {
            printf("%d ", nums[i]);
        }
    }

    /* TODO: print the sum of all values on its own line (it can exceed an int). */

    printf("\n%d", sum);

    /* TODO: give the block back. */
    free(nums);
    return 0;
}
