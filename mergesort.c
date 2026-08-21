
#include<stdio.h>
int temp[100];
void merge(int arr[],int low,int mid,int high)
{
    int i=low,j=mid+1,k=low;
    while(i<=mid && j<=high)
{
    if(arr[i]<=arr[j])
    {
        temp[k]=arr[i];
        i++;
    }
    else
    {
        temp[k]=arr[j];
        j++;
    }
    k++;
}
while(i<=mid)
{
    temp[k]=arr[i];
    i++;
    k++;
}
while(j<=high)
{
    temp[k]=arr[j];
    j++;
    k++;
}
for(i=low;i<=high;i++)
{
    arr[i]=temp[i];
}
}
/// @brief 
/// @param arr 
/// @param low 
/// @param high 
void merge(int arr[],int low,int high)
{
    if (low<high)
    {
        int mid=(low+high)/2;
       
        merge(arr,low,mid);
        merge(arr,mid,high);

    merge(arr,low,mid,high);
    }
}
int main()
{
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    merge(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}