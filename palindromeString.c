#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10], s2[10];
    int i,j,l=0;
    gets(s1);
    //gets(s2);
    for(i=0;s1[i];i++)
    {
        l++;
    }
    for(j=0,i=l-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';
    int d = strcmp(s1,s2);

    if(d==0)
    {
        printf("pallandrome");
    }
    else
    {
        printf("not");
    }

    return 0;
}
