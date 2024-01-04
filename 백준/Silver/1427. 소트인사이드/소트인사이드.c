#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char n[100];
	char tem;
	scanf("%s", &n);

	for (int i = 0; i < strlen(n); i++)
	{
		for (int j = 0; j < strlen(n); j++)
		{
			if (n[i] > n[j])
			{
				tem = n[i];
				n[i] = n[j];
				n[j] = tem;
			}
		}
	}
	printf("%s", n);

	return 0;
}