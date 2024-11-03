#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/****ʵ��һ����ӡ�Ǹ������׳˵ĺ���*****/

void Print_Factorial(const int N);

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

void Print_Factorial(const int N)
{
    if (N < 0)
    {
        printf("Invalid input");
        return;
    }

    unsigned long long factorial = 1; // ʹ��long long�����Դ洢�ϴ�Ľ׳˽��
    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }

    printf("%llu", factorial);
}

