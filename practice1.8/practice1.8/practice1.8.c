#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ʵ��һ��ͳ��������ָ�����ֵĸ����ļ򵥺�����
//����number�ǲ����������͵�������digitΪ[0, 9]�����ڵ�����������CountDigitӦ����number��digit���ֵĴ�����
int CountDigit(int number, int digit)
{
    int cnt = 0, flag;
    if (number < 0)
        number *= -1;//����number�Ǹ�������ȡ��
    while (number >= 10)
    {
        flag = number % 10;//������
        number /= 10;
        if (flag == digit)
            cnt++;//������
    }
    if (number == digit)
        cnt++;
    return cnt;
}

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}