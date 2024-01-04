#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, tem;
	int ar[1000];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &ar[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ar[i] < ar[j])
			{
				tem = ar[i];
				ar[i] = ar[j];
				ar[j] = tem;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", ar[i]);
	}

	return 0;
}