#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/****实现一个打印非负整数阶乘的函数*****/

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

    unsigned long long factorial = 1; // 使用long long类型以存储较大的阶乘结果
    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }

    printf("%llu", factorial);
}

