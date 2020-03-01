#include<stdio.h>
int main()
{
    int j,n,i,a[10],m=0;
    scanf("%d",&n);
    while(j<n)
    {
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(m<a[i])
            m=a[i];
    }
    j++;
    printf("%d\n",m);m=0;
    }
}