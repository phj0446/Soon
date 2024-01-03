#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m = 0, score[1000];
	double sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
		m = (m > score[i]) ? m : score[i];
	}

	for (int i = 0; i < n; i++)
	{
		sum += (double)score[i] / m * 100;
	}
	printf("%lf", sum / n);


	return 0;
}