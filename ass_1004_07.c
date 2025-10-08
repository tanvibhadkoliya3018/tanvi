#include<stdio.h>
int main()
{
int a[5],i;
int largest;
printf("enter 5 number:\n");
for(i=0;i<5;i++)
{
  scanf("%d",&a[i]);
}
largest=a[0];
 for(i=1;i<5;i++)
 { 
    if(a[i]>largest)
    {
       largest=a[i];
    }
 }
 printf("The largest number is:%d\n",largest);
return 0;
}
