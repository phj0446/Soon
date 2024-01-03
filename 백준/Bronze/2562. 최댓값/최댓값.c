#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[9], max = 0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
		max = (max > a[i]) ? max : a[i];
	}
	for (int i = 0; i < 9; i++)
	{
		if (max == a[i])
		{
			printf("%d\n", max);
			printf("%d", i + 1);
			break;
		}
	}


	return 0;
}