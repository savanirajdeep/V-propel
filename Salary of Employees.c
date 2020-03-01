#include<stdio.h>
int main()
{
    char a[20];
    int n,i,id,bs,hra,da;
    float s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a);
        scanf("%d %d %d %d",&id,&bs,&da,&hra);
        s=bs+(da*bs/100)+hra;
        printf("%d\n%.0f\n",id,s);
    }
}