#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int l, a, b, c, d;
	scanf("%d%d%d%d%d", &l, &a, &b, &c, &d);

	int kday = l - ((a % c == 0) ? a / c : a / c + 1);
	int mday = l - ((b % d == 0) ? b / d : b / d + 1);
	(kday < mday) ? printf("%d", kday) : printf("%d", mday);


	return 0;
}