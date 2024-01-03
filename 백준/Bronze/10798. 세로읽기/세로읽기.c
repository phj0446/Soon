#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char n[5][15] = {0};
	for (int i = 0; i < 5; i++)
	{
		scanf("%s", &n[i]);
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (n[j][i] == 0)
				continue;
			else
				printf("%c", n[j][i]);
		}
	}

	return 0;
}