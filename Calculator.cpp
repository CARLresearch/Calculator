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

int logarithm()
{
    int base,no;
    float val;
    cout<<"\nEnter base and argument-";
    cin>>base>>no;
    val=(log(no))/(log(base));
    cout<<val;
}

int trig()
{
    float angle,base,perp,hyp,val1,val2,val3;
    int opt2,opt3;
    cout<<"\nDo you have angle(1) or sides(2)-";
    cin>>opt2;
    if(opt2==1)
    {
        cout<<"Enter angle in degree";
        cin>>angle;
        angle=9((22/7)*angle)/180;
        cout<<"Do you want sin(1),tan(2),cos(3)-";
        cin>>opt3;
        switch(opt3)
        {
            case 1:{val3=sin(angle);
                    cout<<"Sine value- "<<val3;
                    break;
                   }
            
            case 2:{val3=cos(angle);
                    cout<<"Cosine value- "<<val3;
                    break;
                   }
            
            case 3:{val3=tan(angle);
                    cout<<"Sine value- "<<val3;
                    break;
                   }
                          
                          
        }
        (val1=sin(angle);
        cout<<val1;
    }
    else
    {
      cout<<"Enter base and perpendicular length-";
      cin>>base>>perp;
      cout<<"Do you want sin(1),tan(2),cos(3)-";
      hyp=sqrt(((base)*(base))+(perp*perp));
      cin>>opt2;  
      switch(opt2)
      {
         case 1:{val2=perp/hyp;
                 cout<<"Sine value- "<<val2;
                 break;
                }
         case 2:{val2=base/hyp;
                 cout<<"Cosine value- "<<val2;
                 break;
                }
         case 3:{val2=perp/base;
                 cout<<"Tangent value- "<<val2;
                 break;
                }
         default:{cout<<"Invalid option.";
                  break;
                 }
      }
    }
}

int power()
{
    float x,y;
    cout<<"Enter 2 nos";
    cin>>x>>y;
    cout<<pow(x,y);
}
