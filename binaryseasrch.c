
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int low=0;
    int h=sizeof(a)/sizeof(a[0])-1;
    
    while (low<=h)
    {
int mid=(low+h)/2;
if (a[mid]==key)
printf("Element found at key %d",mid);
if (a[mid]>key)
h=mid-1;
else
low=mid+1;
    }
    return 0;
}