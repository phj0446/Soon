#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int l, a, b, c, d;
	int res1 = 0, res2 = 0;
	scanf("%d%d%d%d%d", &l, &a, &b, &c, &d);

	res1 = (a % c) ? (a / c) + 1 : (a / c);
	res2 = (b % d) ? (b / d) + 1 : (b / d);

	(res1 >= res2) ? printf("%d", l - res1) : printf("%d", l - res2);

	return 0;
}