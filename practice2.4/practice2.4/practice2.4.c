//����Ҫ��ʵ��һ���ж������ļ򵥺����������øú�����֤��°ͺղ��룺
//�κ�һ����С��6��ż�����ɱ�ʾΪ����������֮�͡���������ֻ�ܱ�1��������������������
//ע�⣺1����������2��������
//���к���prime���û��������pΪ����ʱ����1�����򷵻�0��
//����Goldbach���ո�ʽ��n = p + q�����n�������ֽ⣬����p��q��Ϊ������
//����Ϊ�����ķֽⲻΨһ������24���Էֽ�Ϊ5 + 19�������Էֽ�Ϊ7 + 17����
//Ҫ�����������н���p��С�Ľ⡣
#include <stdio.h>
#include <math.h>
int prime(int p)
{
    int temp = 1;
    if (p == 1)
        return 0;
    for (int i = 2; i < p; i++)//��Ϊ�����е�һ�����Ӳ����ܴ���������ƽ��������˿���sqrt������С��Χ
    {
        if (p % i == 0)
            return 0;
    }
    return 1;
}
void Goldbach(int n)
{
    for(int i=1;i<=n/2;i++)
        if (prime(i)==1 && prime(n - i)==1)//С�ľ���С
        {
            printf("%d=%d+%d",n,i,n-i);
            break;
        }
}
int main()
{
    int m, n, i, cnt;
    scanf("%d %d", &m, &n);
    if (prime(m) != 0) printf("%d is a prime number\n", m);
    if (m < 6) m = 6;
    if (m % 2) m++;
    cnt = 0;
    for (i = m; i <= n; i += 2) {
        Goldbach(i);
        cnt++;
        if (cnt % 5) printf(", ");
        else printf("\n");
    }

    return 0;
}