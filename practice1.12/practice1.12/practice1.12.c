#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAXS 15
//实现一个函数，统计给定字符串中英文字母、空格或回车、数字字符和其他字符的个数。
//其中 char s[] 是用户传入的字符串。函数StringCount须在一行内按照
//letter = 英文字母个数, blank = 空格或回车个数, digit = 数字字符个数, other = 其他字符个数
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
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
