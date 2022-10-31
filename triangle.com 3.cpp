#include <iostream>

using namespace std;

int main()
{
    //To check whether a number is pallindrom or not//
    int n, digit, n1, rev=0;
    cin>>n;
    n1=n;
    while(n>0)
    {
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    if(rev==n1)
    {cout<<"Number is pallindrom";
    }
    else
    {cout<<"Number is not a pallindrom";
    }


    return 0;
}