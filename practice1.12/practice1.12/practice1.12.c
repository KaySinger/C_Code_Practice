#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAXS 15
//ʵ��һ��������ͳ�Ƹ����ַ�����Ӣ����ĸ���ո��س��������ַ��������ַ��ĸ�����
//���� char s[] ���û�������ַ���������StringCount����һ���ڰ���
//letter = Ӣ����ĸ����, blank = �ո��س�����, digit = �����ַ�����, other = �����ַ�����
void StringCount(char s[])
{
    int letter = 0, blank = 0, digit = 0, other = 0;
    int length = 0, i = 0;
    while (s[i] != '\0')
    {
        length += 1;
        i += 1; 
    }
    for (i = 0; i < length; i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            letter += 1;
        else if ((s[i] >= '0' && s[i] <= '9'))
            digit += 1;
        else if ((s[i] == ' ' || s[i] == '\n'))
            blank += 1;
        else
            other += 1;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
}
void ReadString(char s[]); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
