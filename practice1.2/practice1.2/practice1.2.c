#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���������������
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

/* ��Ĵ��뽫��Ƕ������ */
