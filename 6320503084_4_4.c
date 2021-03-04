#include<stdio.h>
#include<string.h>
int main ()
{
    char s[1000],*q;
    char ch[12][5]= {"i","of","the","on","at","for","with","a","an","in","and"};
    int i,j,x;
    scanf("%[^\n]s",s);
    q=strtok(s," ");
    while(q!=NULL)
    {
        j=0;
        for(i=0; i<11; i++)
        {
            if(strcmp(q,ch[i]))
            {
                x++;;
            }
        }
        if(x==11||j==0)
        {
            printf("%c",toupper(q[0]));
            q=strtok(NULL," ");
            j=1;
        }

    }

}
return 0;
}
