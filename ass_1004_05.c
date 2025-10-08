#include<stdio.h>
int main()
{
int i,j,rows,columns,a[10][10],b[10][10];
int subtraction[10][10];
printf("enter the number of rows and columns:");
scanf("%d%d",&i,&j);
printf("\n enter the first elements:\n");
for(rows=0;rows<i;rows++)
{
 for(columns=0;columns<j;columns++)
 {
  scanf("%d",&a[rows][columns]);
 }
}
printf("\n enter the second element:\n");
for(rows=0;rows<i;rows++)
{
  for(columns=0;columns<j;columns++)
  {
    scanf("%d",&b[rows][columns]);
  }
}
for(rows=0;rows<i;rows++)
{
  for(columns=0;columns<j;columns++)
  {
    subtraction[rows][columns]=a[rows][columns]-b[rows][columns];
  }
}
printf("\n after subtracting matrix a from matrix b=a\n");
for(rows=0;rows<i;rows++)
{
  for(columns=0;columns<j;columns++)
  {
    printf("%d\t",subtraction[rows][columns]);
  }
   printf("\n");
}
return 0;
}
