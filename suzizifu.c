// ��д������ͳ���ַ����������ַ��ĸ�������10�֣�

// ��Ŀ���ݣ�

// ��д������������ַ����������ַ��ĸ��������������������ַ��������ͳ�Ƶĸ�����


// �����ʽ:

// %s


// �����ʽ��

// %d


// ����������

// abc123fg


// ���������

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
