#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num[9][9];
	int max = -1;
    int r_n, c_n;
    
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &num[i][j]);
            if (max < num[i][j])
            {
                max = num[i][j];
                r_n = i+1;
                c_n = j+1;
            }
		}
	}
	printf("%d\n%d %d", max, r_n, c_n);
	
	return 0;
}