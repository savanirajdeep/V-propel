#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("0 ");
    printf("1 ");
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;b=c;
    }
}