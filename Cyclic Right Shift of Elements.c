#include<stdio.h>
int main()
{
    int n,m,a[10],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=n-m;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0;i<n-m;i++)
    {
        printf("%d\n",a[i]);
    }
}