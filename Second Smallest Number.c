#include<stdio.h>
int main()
{
    int n,a[10],i,n1,n2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n1=a[0];n2=a[1];
    if(n1>n2)
    {
        n1=n1+n2;n2=n1-n2;n1=n1-n2;
    for(i=2;i<n;i++)
    {
        if(a[i]<n1)
        {
            n2=n1;
            n1=a[i];
        }   
        else if(a[i]<n2)
            n2=a[i];
    }
    printf("%d",n2);
}
