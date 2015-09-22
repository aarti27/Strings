#include<stdio.h>
#include<string.h>
int main()
{
int t,i,j;
char str[1000],temp;
scanf("%d",&t);
while(t--)
{
scanf("%s",str);
i=0;
j=strlen(str)-1;
while(i<j)
{
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
     i++;
    j--;

}
printf("Reversed string is %s",str);
}
return 0;
}
