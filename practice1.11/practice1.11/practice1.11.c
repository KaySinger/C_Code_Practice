#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ʵ��һ�����������n�п��ĵ����ֽ�������
//����n���û�����Ĳ�����Ϊ[1, 9]����������Ҫ����������������ʾ�ĸ�ʽ��ӡ��n�п��ĵ����ֽ���������ע�⣬���һ�еĵ�һ������ǰû�пո�
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

