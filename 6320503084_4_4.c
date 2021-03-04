#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char s[1000],*q;
    char ch[12][5]= {"i","of","the","on","at","for","with","a","an","in","and"};
    int i,j=0,x=0;
    scanf("%[^\n]s",s);
    q=strtok(s," ");
    while(1)
    {
        for(i=0; i<11; i++)
        {
            if(strcmp(q,ch[i]))
            {
                x++;
            }
        }
        if(x==11||j==0)
        {
            printf("%c",toupper(q[0]));
            j=1;
        }
        q=strtok(NULL," ");
        x=0;
        if(q==NULL)
        {
            break;
        }
    }
    return 0;
}

