#include<iostream>
using namespace std;
#include<math.h>
long int sum_pow(int n, int m=0);

long int sum_pow(int n,int m)
{
    long int final=0;
    if(m==0)
    {
        for(int i=1;i<=n;i++)
        {
            final+=pow(i,i);
        }
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            final+=pow(i,m);
        }
    }
    printf("jd");
    return final;
}

int main()
{	
	long int sum,n,m;
	cin>>n>>m;
	if(m<0)
	cout<<"Invalid input";
	else
	{
	if(m!=0)
	sum=sum_pow(n, m);
	else
	sum=sum_pow(n);
	cout<<sum;
	}
}
