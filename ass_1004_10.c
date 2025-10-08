#include<stdio.h>
int main()
{
int arr[100];
int n,i,largest;
printf("enter the number of elements in the array:");
scanf("%d",&n);
printf("enter %d elements:\n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
largest=arr[0];
for(i=1;i<n;i++)
{
  if(arr[i]>largest)
  {
    largest=arr[i];
  }
}
printf("the largest element in the array is:%d\n",largest);
return 0;
}

