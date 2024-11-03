#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int N;
	int i = 0, n = 0;
	scanf("%d", &N);
	int A[10][10];
	for (n = 0; n < N; n++)//第n行
	{
		A[n][0] = 1;

		for (i = 0; i <= n; i++)//第n行的第i个数据
		{
			if (i == n)
			{
				A[n][i] = 1;
			}
			else if (n >= 2 && i >= 1)//第三行第二列开始
			{
				A[n][i] = A[n - 1][i - 1] + A[n - 1][i];
			}
		}
	}
	//输出结果
	
	
	for (i = 0; i < N; i++)
	{
		printf("%d ", A[N-1][i]);
	}
	
	return 0;
}