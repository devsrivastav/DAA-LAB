#include<stdio.h>
int linearSearch(int arr[], int size, int target) {
for (int i = 0; i < size; i++) {
if (arr[i] == target) {
return i; // Element found, return index
}
}
return -1; // Element not found, return -1
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
printf("Enter the element to search: ");
scanf("%d",&k);
int a = linearSearch(arr,n,k);
if(a==-1)
{
printf("Element not found");
}
else
{
printf("Element found at pos %d ",a+1);
}
return 0;
}