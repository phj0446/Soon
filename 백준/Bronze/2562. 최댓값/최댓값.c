#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int i;
	int max = 0;
	int index = 0;
	int a[9];

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 9; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			index = i;
		}

	}
	printf("%d\n", max);
	printf("%d", index+1);


	return 0;
}