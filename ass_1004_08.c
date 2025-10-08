//convert all vowels in a string to uppercase.

#include<stdio.h>
#include<ctype.h>
int main()
{
char str[100];
int i;
printf("enter string:-");
fgets(str,sizeof(str),stdin);
for(i=0;str[i]!='\0';i++)
{
  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
  str[i]=toupper(str[i]);
}
printf("\n Result: %s\n",str);
return 0;
}
