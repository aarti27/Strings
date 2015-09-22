#include<stdio.h>
#include<string.h>
int main()
{
int i,j,n,k;
char str[100][100];
printf("Enter how many strings: ");
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%s",str[i]);
for(i=0;i<n-1;i++)
{
                                                                                //for(i=1;i<n;i++)....put largest element at end
     for(j=i+1;j<n;j++)//..lighest element at start                         //    for(j=0;j<n-i;j++)
        if(strcmp(str[i],str[j])>0)
        {
            char temp[100];
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
        }
for(k=0;k<n;k++)
{
   printf("%s ",str[k]);
}
   printf("\n");
}
return 0;

}



