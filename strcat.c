#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10], s2[10];
    int c;
    gets(s1);
    gets(s2);
    strcat(s1,s2);
    printf("%s\n",s1);
    return 0;
}
