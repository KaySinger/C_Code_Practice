#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//找两个数中最大者
int max(int a, int b)
{
    int max = 0;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("max = %d\n", max(a, b));

    return 0;
}

/* 你的代码将被嵌在这里 */
