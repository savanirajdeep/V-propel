#include<stdio.h>
struct ip{
    int a,b,c,d;
    char n[20];
}m[10];
int main()
{
    int x,i,j;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d.%d.%d.%d",&m[i].a,&m[i].b,&m[i].c,&m[i].d);
        scanf("%s",&m[i].n);
        
    }
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(m[i].a==m[j].a && m[i].b==m[j].b)
            {
                printf("Machines %s and %s are on the same local network",m[i].n,m[j].n);
            }
        }
    }
    return 0;
}