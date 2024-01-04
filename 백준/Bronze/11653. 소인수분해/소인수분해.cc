#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m = 2;
	int res[100], q = 0;
	scanf("%d", &n);


	while (n != 1)
	{
		if (n % m == 0)
		{
			printf("%d\n", m);
			n /= m;
		}
		else
		{
			m++;
		}
	}

	return 0;
}