
#include<stdio.h>
int main()
{
    int arr[5];
    int *pt=arr;
    for (int i=0;i<5;i++)
    {
        scanf("%d",pt+i);
    }
    for (int i=0;i<5;i++)
    printf("%d",*(pt+i));
    return 0;

}