
// ��д��������e=1+1/1!+1/2!+1/3!+����+1/n!��ֵ����10�֣�

// ��Ŀ���ݣ�

// ��д���������ݸ�����ʽ����e��ֵ��1+1/1!+1/2!+1/3!+����+1/n!��ֵ��ȡǰn���Ҫ����������������n��ֵ�����ú�������������


// �����ʽ:

// %d


// �����ʽ

// e=%.4f


// ����������

// 10


// ���������

// e=2.7183


#include <stdio.h>
#include <math.h>

double Jiechen(int n)
{
    double sum=1;
    for (int i = 1; i <= n; i++)
    {
        sum*=i;
    }
    return sum;
}

double Qjiechen(int n)
{
    double sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += 1/Jiechen(i);
    }
    
    return sum;
}



int main()
{
    double e;
    int n;
    scanf("%d", &n);
    e = Qjiechen(n);
    printf("%.4f", e);

}    
