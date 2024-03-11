#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,n,m=0,flag=0;

    cout<<"Enter a positive number: ";
    cin>>n;
    m = n/2;

    for(i=2; i<=m; i++)
    {
        if(n % i == 0)
        {
            cout<< n <<" is not a prime number.";
            flag=1;
            break;
        }
    }

    if(flag == 0)
    {
        cout<< n << " is a prime number."; 
    }
    return 0;
}