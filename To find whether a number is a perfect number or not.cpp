#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //To find whether a number is a perfect number or not//
    int i,n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<"Number is Perfect";
    }
    else{
        cout<<"Number is not a perfect number.";
    }
    
    return 0;
    
}