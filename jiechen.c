
// 编写函数，求e=1+1/1!+1/2!+1/3!+……+1/n!的值。（10分）

// 题目内容：

// 编写函数，根据给定公式计算e的值：1+1/1!+1/2!+1/3!+……+1/n!的值（取前n项），要求在主函数中输入n的值，调用函数并输出结果。


// 输入格式:

// %d


// 输出格式

// e=%.4f


// 输入样例：

// 10


// 输出样例：

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
