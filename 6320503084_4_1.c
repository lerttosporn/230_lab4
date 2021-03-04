#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,max=0,min=1000,x,z;
    scanf("%d",&a);
    int A[a][3],B[a-2];
    for(b=0; b<a; b++)
    {
        scanf("%d %d %d",&A[b][0],&A[b][1],&A[b][2]);
    }
    for(c=0; c<a-2; c++)
    {
        B[c]=A[c][0]*4+A[c][1]*2+A[c][2]
             +A[c+1][0]*4+A[c+1][1]*2+A[c+1][2]
             +A[c+2][0]*4+A[c+2][1]*2+A[c+2][2];
        if(B[c]>max)
        {
            max=B[c];
            x=c;
        }
        if(B[c]<min)
        {
            min=B[c];
            z=c;
        }
    }
    printf("%d %d",x+1,z+1);

}
