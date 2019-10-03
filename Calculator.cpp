#include<iostream>
#include<math.h>

using namespace std;

int add()
{
    int nos[20],i,limit,sum=0;
    cout<<"How many nos to be added-";
    cin>>limit;
    cout<<"Enter the nos-";
    for(i=1;i<=limit;i++)
    {
        cin>>nos[i];
        sum=sum+nos[i];
    }
    cout<<"Sum is "<<sum;
}
                                              
int subtract()
{
    int nos[20],i,limit,diff=0;
    cout<<"How many nos to be subtracted-";
    cin>>limit;
    cout<<"Enter the nos-";
    for(i=1;i<=limit;i++)
    {
        cin>>nos[i];
        diff=nos[i]-diff;
    }
    cout<<"Difference is "<<diff;
}

int multiply()
{
    int nos[20],i,limit,prod=1;
    cout<<"How many nos to be multiplied-";
    cin>>limit;
    cout<<"Enter the nos-";
    for(i=1;i<=limit;i++)
    {
        cin>>nos[i];
        prod=prod*nos[i];
    }
    cout<<"Product is "<<prod;
}

int divide()
{
    int nos[20],i,limit;
    float quo=1;
    cout<<"How many nos to be divided-";
    cin>>limit;
    cout<<"Enter the nos-";
    for(i=1;i<=limit;i++)
    {
        cin>>nos[i];
        quo=nos[i]/quo;
    }
    cout<<"Quotient is "<<quo;
}

