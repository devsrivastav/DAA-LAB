#include<stdio.h>
int binary(int arr[],int k,int low,int high)
{
if(low<=high)
{
int mid=(low+high)/2;
if(arr[mid]==k)
{
return mid;
}
else if(arr[mid]<k)
{
return binary(arr,k, mid+1,high);
}
return binary(arr,k,low,mid-1);
}
return-1;
}
int main()
{
int n,k;
printf("Enter n: ");
scanf("%d",&n);
//printf("Enter the sorted array: ");
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the key element: ");
scanf("%d",&k);
int a=binary(arr,k,0,n-1);
if(a==-1)
{
printf("The element is not found");
}
else
{
printf("The element is found at %d",a+1);
}
return 0;
}