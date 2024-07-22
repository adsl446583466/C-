// 编写函数，统计字符串中数字字符的个数。（10分）

// 题目内容：

// 编写函数，求给定字符串中数字字符的个数，在主函数中输入字符串及输出统计的个数。


// 输入格式:

// %s


// 输出格式：

// %d


// 输入样例：

// abc123fg


// 输出样例：

// 3

#include <stdio.h>
#include <string.h>
#include <math.h>

int IsIntSum(char a)
{
    if (a>='0' && a<='9')
    {
        return 1;
    }
    
    return 0;
}

int main()
{
    char a[80];
    int i,isIntSum=0;
    scanf("%s",&a);
    for ( i = 0; i < strlen(a); i++)
    {
        if (IsIntSum(a[i]))
        {
            isIntSum++;
        }
        
    }
    

    printf("%d", isIntSum);

}    
