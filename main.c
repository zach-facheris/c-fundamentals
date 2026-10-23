#include <stdio.h>
#include <sys/param.h>

int main(void)
{
	int nums[5];
	for (int i = 0; i < 5; i++)
		scanf("%d", &nums[i]);

	int best = 0; /* TODO: start from a real element of nums, not from 0 */

	/* TODO: loop over the remaining elements; whenever one is bigger
	   than best, it becomes the new best */
	for(size_t i = 0; i < 5; i++)
	{
		best = MAX(best, nums[i]);
	}

	printf("%d\n", best);
	return 0;
}
