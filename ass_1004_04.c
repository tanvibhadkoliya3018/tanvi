#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
printf("enter first string:");
fgets(str1,sizeof(str1),stdin);
printf("enter second string: ");
fgets(str2,sizeof(str2),stdin);
strcat(str1,str2);
printf("the concatenated string is:%s",str1);
return 0;
}
