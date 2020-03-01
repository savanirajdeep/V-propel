#include<stdio.h>
struct tender{
    int regno,amount;
    char name[30];
};
int main()
{
    struct tender a[10];
    int n,i,k,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d",&a[i].regno,&a[i].name,&a[i].amount);
    }
    min=a[0].amount;k=0;
    for(i=0;i<n;i++)
    {
        if(min>a[i].amount)
        {
            min=a[i].amount;
            k=i;
        }
    }
    
    printf("%d\n%s",a[k].regno,a[k].name);
    return 0;
}