
#include<stdio.h>
int main()
{
    int a[5]={5,4,3,2,1};
    int i ,j,t,min;
    for (i=0;i<5;i++)
    {
        for (j=i+1;j<5;j++)
        {
            if (a[j]<a[min])
            {
                min=j;

            }
            t=a[i];
            a[i]=a[min];
            a[min]=t;
        }
    }
    for (i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}