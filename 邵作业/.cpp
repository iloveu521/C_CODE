#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tuple>
//
//int main()
//{
//	int i = 0;
//	int N;
//	double sum = 1;
//	scanf("%d", &N);
//	for (i = 2 ; i <= N;i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum += 1.0 / i;
//		}
//		else
//		{
//			sum -= 1.0 / i;
//		}
//
//	}
//	printf("%.3f", sum);
//
//	return 0;
//
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int a = sizeof(arr)/ sizeof(arr[0]);
//	printf("%d", a);
//	return 0;


int main()
{
	int i = 0;
	int j = 0;
	int z = 0;
	for (i = 0;i < 9;i++)
		for(j = 0;j < 9 - j;j++)
		{
			printf("+\n");
		}
	return 0;
}