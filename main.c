#include <stdio.h>
#include <string.h>

int main(void)
{
	double n1 = 0.0;
	double n2 = 0.0;

	scanf("%lf %lf", &n1, &n2);

	printf("%f\n", n1 + n2);
	printf("%d\n", (int)(n1 + n2));

	return 0;
}
