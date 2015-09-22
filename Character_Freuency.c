#include<stdio.h>
#include<string.h>
int main()
{
char str[1000];
int t,no,check;
scanf("%d",&t);
getchar();
while(t--)
{
scanf("%d",&no);
check=no&1;
if(check)
    printf("%d is odd\n",no);
else printf("%d is even\n",no);
}
return 0;
}
