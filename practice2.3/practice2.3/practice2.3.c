//����Ҫ��ʵ��һ������Fibonacci���ļ򵥺�����
//��������ʵ����һ�������������������m��n��0 < m��n��10000��֮�������Fibonacci����
//��νFibonacci���о���������һ��������ǰ����ĺͣ��ʼ���������Ϊ1�������С�
//���к���fib�뷵�ص�n��Fibonacci����
//����PrintFNҪ��һ�������������Χ[m, n]�ڵ�����Fibonacci����
//�������ּ���һ���ո���ĩ�����ж���ո��������������û��Fibonacci����
//�����һ�С�No Fibonacci number����
#include <stdio.h>
int fib(int n)//fib(7)=13��1+1+2+3+5+8=13 13Ϊ��7��
{
    int num1 = 1, num2 = 1, sum = 0;
    while (n > 2)
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
        n--;
    }
    return sum;
}
void PrintFN(int m, int n)
{
    int flag = 0;//��ʶ��
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        int temp = fib(i);
        if (temp >= m && temp <= n)
        {
            flag = 1;
            count++;
            if (count > 1)
                printf(" ");
            printf("%d",temp);
        }
    }
    if (flag == 0)
        printf("No Fibonacci number");
}
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}