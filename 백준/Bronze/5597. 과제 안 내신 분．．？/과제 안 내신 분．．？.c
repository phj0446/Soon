#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[30] = {0};
	int n;
	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &n);
		num[n - 1] = n;
	}
	for (int i = 0; i < 30; i++)
	{
		if (num[i] == 0)
			printf("%d\n", i+1);
	}


	return 0;
}