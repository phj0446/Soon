#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int n, m, i, j, k;
	int array[101] = {0};
	scanf("%d%d", &n, &m);
	for (int a = 0; a < m; a++)
	{
		scanf("%d%d%d", &i, &j, &k);
		for (; i-1 < j; i++)
		{
			array[i-1] = k;
		}
	}
	for (int a = 0; a < n; a++)
	{
		printf("%d ", array[a]);
	}

	return 0;
}