#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <stdio.h>
#include <math.h>

//
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//
//	}
//
//	return 0;
//}


//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//		default:
//			printf("error");
//			break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (i == 5)
//			continue;//死循环
//		printf("%d", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 9)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//
//	return 0;
//}
//
//void PrintN(int N)
//{
//    int i = 1;
//    while (i <= N)
//    {
//        printf("%d\n", i);
//        i++;
//    }
//
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int N;
//
//    scanf("%d", &N);
//    PrintN(N);
//
//    return 0;
//}

/* 你的代码将被嵌在这里 */


//#define MAXN 10
//
//double f(int n, double a[], double x)
//{
//    double result = 0;
//    for (int i = 0;i <= n;i++)
//    {
//	    result += a[i] * pow(x,i);
//    }
//        return result;
//
//}
//
//int main()
//{
//    int n, i;
//    double a[MAXN], x;
//
//    scanf("%d %lf", &n, &x);
//    for ( i=0; i<=n; i++ )
//        scanf("%lf", &a[i]);
//    printf("%.1f\n", f(n, a, x));
//    return 0;
//}

/* 你的代码将被嵌在这里 */

//#define MAXN 10
//
//int Sum(int List[], int N)
//{
//    int result = 0;
//	for (int i = 0;i < N;i++)
//    {
//		result += List[i];
//    }
//	return result;
//
//}
//
//int main()
//{
//    int List[MAXN], N, i;                                 //    3
//														//12 34 - 5
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%d", &List[i]);
//    printf("%d\n", Sum(List, N));
//
//    return 0;
//}

/* 你的代码将被嵌在这里 */


//#include <numeric>
//#include <stdio.h>
//
//#define MAXN 10
//typedef float ElementType;

//int main()
//{
//	int i,N;
//	ElementType sum = 0, S[];
//
//	    scanf("%d", &N);
//	    for (i = 0; i < N; i++)
//	        scanf("%f", &S[i]);
//		printf("%z", sizeof(S[i]));
//	    return 0;
//}

//ElementType Average(ElementType S[], int N)
//{
//    ElementType result;
//	ElementType sum = 0;
//    int i,len = 0;
//    for ( i = 0;i < N;i++)
//    {
//        sum += S[i];
//        len++;
//    }
//    result = sum /len ;
//
//    return result;
//}
//
//int main()
//{
//    ElementType S[MAXN];
//    int N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%f", &S[i]);
//    printf("%.2f\n", Average(S, N));
//
//    return 0;
//}

/* 你的代码将被嵌在这里 */

//#include <stdio.h>
//
//#define MAXN 10
//typedef float ElementType;
//
//ElementType Max(ElementType S[], int N)
//{
//    ElementType result;
//    int i;
//    result = S[0];
//    for (i = 0;i < N;i++)
//    {
//       if (S[i] > result)
//       {
//           result = S[i];
//       }
//
//    }
//
//
//    return result;
//}
//
//int main()
//{
//    ElementType S[MAXN];
//    int N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%f", &S[i]);
//    printf("%.2f\n", Max(S, N));
//
//    return 0;
//}

/* 你的代码将被嵌在这里 */


//////#include <stdio.h>
//////#include <stdlib.h>
//////
//////typedef struct Node* PtrToNode;
//////struct Node {
//////    int Data; /* 存储结点数据 */
//////    PtrToNode Next; /* 指向下一个结点的指针 */
//////};
//////typedef PtrToNode List; /* 定义单链表类型 */
//////
//////int FactorialSum(List L);
//////
//////int main()
//////{
//////    int N, i;
//////    List L, p;
//////
//////    scanf("%d", &N);
//////    L = NULL;
//////    for (i = 0; i < N; i++) {
//////        p = (List)malloc(sizeof(struct Node));
//////        scanf("%d", &p->Data);
//////        p->Next = L;  L = p;
//////    }
//////    printf("%d\n", FactorialSum(L));
//////
//////    return 0;
//////}

/* 你的代码将被嵌在这里 */


//#include <stdio.h>
//#include <math.h>
//#define MAXN 10
//
//int IsTheNumber(const int N)
//{
//    int sqrtN = (int)sqrt(N);
//    if (sqrtN * sqrtN != N)
//    {
//        return 0;
//    }
//    int temp = N;
//    int digits[MAXN] = { 0 };
//    while (temp > 0)
//    {
//        digits[temp % 10]++;
//        temp /= 10;
//    }
//    for (int i = 0;i < MAXN;i++)
//    {
//	    if (digits[i] >= 2)
//	    {
//            return 1;
//	    }
//    }
//    return 0;
//}
//
//int main()
//{
//    int n1, n2, i, cnt;
//
//    scanf("%d %d", &n1, &n2);
//    cnt = 0;
//    for (i = n1; i <= n2; i++) {
//        if (IsTheNumber(i))
//            cnt++;
//    }
//    printf("cnt = %d\n", cnt);
//
//    return 0;
//}

/* 你的代码将被嵌在这里 */
//
//#include <stdio.h>
//
//int Factorial(const int N);
//
//int main()
//{
//    int N, NF;
//
//    scanf("%d", &N);
//    NF = Factorial(N);
//    if (NF)  printf("%d! = %d\n", N, NF);
//    else printf("Invalid input\n");
//
//    return 0;
//}
//int Factorial(const int N)
//{
//    if (N > 0)
//    {
//        int result = 1;
//        for (int i = 1; i <= N; i++)
//        {
//            result *= i;
//        }
//        return result;
//    }
//    if(N == 0)
//    {
//        return 1;
//    }
//    return 0;
//}

/* 你的代码将被嵌在这里 */


//#include <stdio.h>
//#include <math.h>
//
//int Count_Digit(const int N, const int D);
//
//int main()
//{
//    int N, D;
//
//    scanf("%d %d", &N, &D);
//    printf("%d\n", Count_Digit(N, D));
//    return 0;
//}
//int Count_Digit(const int N, const int D)
// {
//    int n = N;
//    n = fabs(n);
//    int digits[10] = { 0 };//0 ~ 9有十个数
//
//    if (n == 0)
//    {
//        if (D == 0) return 1;
//        else return 0;
//    }
//
//    while (n > 0) 
//    {
//        digits[n % 10]++;//使下标为n/%0的位置++并储存在该位置
//        n /= 10;
//    }
//
//    return digits[D];
//}

/* 你的代码将被嵌在这里 */


