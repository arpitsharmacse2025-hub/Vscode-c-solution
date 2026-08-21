#include<stdio.h>

int linearsearch(int a[],int size,int key)
{
for (int i =0;i<size;i++)
{
if (key==a[i])
return i;
}
return-1;

}
int main()
{
int a[5]={1,2,3,4,5};
int key=3;
int size=sizeof(a)/sizeof(a[0]);
int r=linearsearch(a,size,key);
if (r!=-1)
{
    printf("found at index %d",r);
   
}
else
{
     printf("not found");
}
return 0;
}