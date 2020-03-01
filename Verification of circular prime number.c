#include<stdio.h>
#include<math.h>

int isprime(int n)
{
    int i,temp=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            temp++;
            break;
        }
    }
    if(temp==0)
        return 1;
    else
        return 0;
}
int change(int a,int len)
{
    int temp,k,i=1,j;
    for(temp=0;temp<len-1;temp++)
    {
        i=i*10;
    }
    j=a/i;k=a%i;
    a=(k*10)+j;
    return a;
}
int main()
{
    int n,n2,i=0,last=0,len=0;
    scanf("%d",&n);
    n2=n;
    while(n>0)
    {
        len++;
        n=n/10;
    }
    for(i=0;i<len;i++)
    {
        n2=change(n2,len);
        last+=isprime(n2);
        
    }
    if(last==len)
        printf("Circular prime");
    else
        printf("Not circular prime");
}