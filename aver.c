#include <stdio.h>
#include <math.h>

int main()
{
    int aver(int a[],int n);
    int a[10], i=0,sum=0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    
    printf("%d\n",aver(a,sum));

    
    
}    

int aver(int a[], int n)
{
    double aver = n / 10;
    int i, j=0;
    for (i = 0; i < 10; i++)
    {
        if (a[i]>aver)
        {
            j++;
        }
        
    }
    
    return j;
}