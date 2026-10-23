#include <stdio.h>
#include <string.h>

int main(void)
{
	int width = 0;
	int height = 0;

	scanf("%d %d", &width, &height);

	long long area = (long long)width * (long long)height;
	double ratio = (double)width / height;

	printf("%lld\n", area);
	printf("%.2f\n", ratio);

	return 0;
}
