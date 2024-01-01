#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int n, s;
	double score[1000];
	int m = 0;
	double sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &s);
		m = (m > s) ? m : s;
		score[i] = (double)s;
	}
	for (int i = 0; i < n; i++)
	{
		score[i] = score[i] / (double)m * 100;
		sum += score[i];
	}
	printf("%lf", sum / n);

	return 0;
}