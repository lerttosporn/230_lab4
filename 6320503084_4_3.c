#include<stdio.h>
#include<string.h>
int main ()
{
    char s[200];
    int i,j=0;
    scanf("%s",s);
    i=strlen(s);
    while(j<i)
    {
        if(s[j-1]!=s[j])
        {
            printf("%c",s[j]);
        }
        j++;
    }
    return 0;
}
