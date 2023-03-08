#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
//给定两个均不超过9的正整数a和n，要求编写函数求a+aa+aaa++⋯+aa⋯a（n个a）之和。
//其中函数fn须返回的是n个a组成的数字；SumA返回要求的和。
int fn(int a, int n)
{
    int A = 0;
    for (int i = 0; i < n; i++)
    {
        A = A + a * pow(10, i);
    }
    return A;
}
int SumA(int a, int n)
{
    int sum = 0;
    for (int i = 1; i < n + 1; i++)
    {
        sum += fn(a, i);
    }
    return sum;
}

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
    printf("s = %d\n", SumA(a, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
