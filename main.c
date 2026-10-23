#include <stdio.h>
#include <string.h>

int main(void)
{
	int width = 0;
	int height = 0;

	scanf("%d %d", &width, &height);

	double ratio = (double)width / height;

	printf("%d\n", width * height);
	printf("%.2f\n", ratio);

	return 0;
}
