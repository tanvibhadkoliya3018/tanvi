#include<stdio.h>
int main()
{
int N,i;
{
printf("enter the value of N:");
scanf("%d",&N);
printf("The first %d even number are:\n",N);
for(i=1;i<=N;i++)
{
printf("%d",2*i);
}
return 0;
}
}

