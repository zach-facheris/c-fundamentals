#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    /* TODO: print exactly one line:
         multiple of 3 and 5  -> FizzBuzz
         multiple of 3 only   -> Fizz
         multiple of 5 only   -> Buzz
         anything else        -> the number itself */

	if(n % 3 == 0 && n % 5 == 0)
	{
		printf("FizzBuzz\n");
	}
	else if(n % 3 == 0)
	{
		printf("Fizz\n");
	}
	else if(n % 5 == 0)
	{
		printf("Buzz\n");
	}
	else
	{
		printf("%d\n", n);
	}

    return 0;
}
