#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
int t,i,j;
scanf("%d",&t);
while(t--)
{
    printf("\n");
printf("Enter string1: ");
scanf("%s",str1);
printf("Enter string2: ");
scanf("%s",str2);
for(i=0;str1[i];i++);
for(j=0;str2[j];j++)
    str1[i+j]=str2[j];
str1[i+j]='\0';
printf("%s",str1);
}
return 0;
}
