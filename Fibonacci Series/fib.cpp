#include <iostream>
#include<conio.h>
using namespace std;

class fibonacci
{
    private:
    long int f0,f1,fib;
    int n,i;
    public:
    int calculatefib()
    {
        f0=0;
        f1=1;
        cout<<"Enter the number (n) upto which fibonacci series is generated: ";
        cin>>n;
        cout<<"Fibonacci series:"<<f0<<"\t"<<f1;
        for(i=1;i<=n;i++)
        {
            fib=f0+f1;
            cout<<"\t"<<fib;
            f0=f1;
            f1=fib;
        }
    }
};

int main()
{
    fibonacci f;
    f.calculatefib();
    return 0;
}