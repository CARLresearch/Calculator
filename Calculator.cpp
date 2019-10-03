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
