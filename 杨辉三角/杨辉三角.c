#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int N;
	int i = 0, n = 0;
	scanf("%d", &N);
	int A[10][10];
	for (n = 0; n < N; n++)//��n��
	{
		A[n][0] = 1;

		for (i = 0; i <= n; i++)//��n�еĵ�i������
		{
			if (i == n)
			{
				A[n][i] = 1;
			}
			else if (n >= 2 && i >= 1)//�����еڶ��п�ʼ
			{
				A[n][i] = A[n - 1][i - 1] + A[n - 1][i];
			}
		}
	}
	//������
	
	
	for (i = 0; i < N; i++)
	{
		printf("%d ", A[N-1][i]);
	}
	
	return 0;
}