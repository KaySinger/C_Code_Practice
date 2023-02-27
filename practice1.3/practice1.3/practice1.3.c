#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//实现函数输出n行字符金字塔
void CharPyramid(int n, char ch)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int m = 1; m <= i; m++)
        {
            printf("%c ",ch);    
        }
        printf("\n");
    }
}

int main()
{
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);

    return 0;
}
