#include<iostream>
using namespace std;
class customer{
    public:
        char name[20],mobile_no[10],add[30];
        int cus_id,n,cost[20],i,total=0;
    
        void get()
        {
            cin>>name>>mobile_no>>add>>cus_id>>n;
            for(i=0;i<n;i++)
            {
                cin>>cost[i];
            }
        }
        
        int calc_Total()
        {
            int i;
            total=0;
            for(i=0;i<n;i++)
            {
                total+=cost[i];
            }
            return total;
        }
};
class preferred_Customer
{
    public:
        char name[20],mobile_no[10],add[30];
        int cus_id,n,cost[20],i,total=0;

        void get()
            {
                cin>>name>>mobile_no>>add>>cus_id>>n;
                for(i=0;i<n;i++)
                {
                    cin>>cost[i];
                    
                }
               for(i=0;i<n;i++)
                {
                    total+=cost[i];
                    if(total>=20000)
                    {
                        cost[i]=cost[i]*0.96;
                    }
                    else if(total>=15000)
                    {
                        cost[i]=cost[i]*0.97;
                    }
                    else if(total>=10000)
                    {
                        cost[i]=cost[i]*0.98;
                    }
                    else if(total>=5000)
                    {
                        cost[i]*0.99;
                    }
                
                }
            }
            int calc_Total()
            {
                int i;
                total=0;
                for(i=0;i<n;i++)
                {
                    total+=cost[i];
                }
                return total;
            }
 
      
        
};

int main()
{
	int ch;
	//get choice of customer
	cin>>ch;
	if(ch==0)
	{
	customer c1;
	//get the details of customer
	c1.get();
	//calculate total amount to be paid
	//develop a function in customer class that will calculate 
	// the total amount and return it
	cout<<c1.calc_Total();
	}
	else
	{
	//preferred customer
	preferred_Customer pc;
	//get details
	pc.get();
	//function should calculate and return total amount
	cout<<pc.calc_Total();
	}
}