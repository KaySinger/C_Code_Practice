#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//实现一个函数，输出n行空心的数字金字塔。
//其中n是用户传入的参数，为[1, 9]的正整数。要求函数按照如样例所示的格式打印出n行空心的数字金字塔，请注意，最后一行的第一个数字前没有空格。
void hollowPyramid(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - 1 + i; j++)
        {
            if (i == n)
                printf("%d", i);
            else if (i < n)
                if (j == n + 1 - i || j == n - 1 + i)
                    printf("%d", i);
                else
                    printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    hollowPyramid(n);

    return 0;
}

