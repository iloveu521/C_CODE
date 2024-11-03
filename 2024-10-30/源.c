#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    c = a / 100 * 60 + a % 100;
    d = b / 100 * 60 + b % 100;
    printf("%d:%d", (d - c) / 60, (d - c) % 60);
    return 0;
}