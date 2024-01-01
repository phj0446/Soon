#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int n, m, i, j;
	int b[100];
	int s = 0;
	scanf("%d %d", &n, &m);

	for (int a = 0; a < n; a++)
	{
		b[a] = a + 1;
	}
	
	for (int a = 0; a < m; a++)
	{
		scanf("%d %d", &i, &j);
		i--; j--;
		for (int q = 1; q <= (j-i+1)/2; i++, j--)
		{

			s = b[i];
			b[i] = b[j];
			b[j] = s;
		}
	}
	for (int a = 0; a < n; a++)
	{
		printf("%d ", b[a]);
	}


	return 0;
}