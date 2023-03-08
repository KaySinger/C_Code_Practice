#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
//ʵ��һ�������������Ӻ͵ļ򵥺�������������ʵ����һ�������������������m��n��0<m��n��10000��֮�������������
//��ν�������Ǹ���ǡ�õ��ڳ������������֮�͡����磺6=1+2+3������1��2��3Ϊ6�����ӡ�
//���к���factorsum�뷵��int number�����Ӻͣ�����PrintPNҪ�������������Χ[m, n]��ÿ�������������ۼ���ʽ�ķֽ�ʽ��
//ÿ������ռһ�У���ʽΪ������ = ����1 + ����2 + ... + ����k�����������������Ӿ�������˳�������
//�������������û�������������һ�С�No perfect number����
int factorsum(int number)
{
    int sum = 1;
    int n = sqrt(number);
    //���һ������������һ����һ��С����*һ���������������������ӽ���ʱ�������ȵ�ʱ��
    if (number == 1)
        return 0;
    for (int i = 2; i <= n; i++)
    {
        if (number % i == 0)
            sum += i + number / i;
    }
    return sum;
}
void PrintPN(int m, int n)
{
    int temp = 0;
    for (m; m <= n; m++)
    {
        if (factorsum(m) == m)
        {
            temp = 1;
            printf("%d = 1", m);
            for (int i = 2; i < m; i++)
            {
                if (m % i == 0)
                    printf(" + %d",i);
            }
            printf("\n");
        } 
    }
    if (temp == 0)
    {
        printf("No perfect number");
    }
}

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (factorsum(m) == m) printf("%d is a perfect number\n", m);
    if (factorsum(n) == n) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
