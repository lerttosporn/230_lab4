#include<stdio.h>
int main ()
{
    int i,j=0,k,x,l,n,m;
    char s[100];
    scanf("%d",&i);
    while(i>0)
    {
        int ar[2][2]= {{1,0},{0,0}};
        ar[0][0]=1;
        scanf("%s",s);
        k=strlen(s);
        for(j=0; j<k; j++)
        {
            if(s[j]=='A')
            {
                x=ar[1][0];
                ar[1][0]=ar[0][1];
                ar[0][1]=x;
            }
            if(s[j]=='B')
            {
                x=ar[0][1];
                ar[0][1]=ar[1][1];
                ar[1][1]=x;
            }
            if(s[j]=='C')
            {
                x=ar[0][0];
                ar[0][0]=ar[1][0];
                ar[1][0]=x;
                x=ar[0][1];
                ar[0][1]=ar[1][1];
                ar[1][1]=x;
            }
            if(s[j]=='D')
            {
                x=ar[0][0];
                ar[0][0]=ar[0][1];
                ar[0][1]=x;
                x=ar[1][0];
                ar[1][0]=ar[1][1];
                x=ar[1][1];
            }
            if(s[j]=='E')
            {
                x=ar[0][0];
                ar[0][0]=ar[1][1];
                ar[1][1]=x;
                x=ar[1][0];
                ar[1][0]=ar[0][1];
                x=ar[0][1];
            }
        }
        for(l=0; l<2; l++)
        {
            for(n=0; n<2; n++)
            {
                if(ar[l][n]==1)
                    m++;
            }
        }
        printf("%d",m);
        i--;
    }

    return 0;
}
