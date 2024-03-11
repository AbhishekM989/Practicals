#include<iostream>
#include<conio.h>
using namespace std;

class ratio
{
    public:
        ratio(void);
        int display(void);
        ~ ratio();
};

ratio::ratio(void)
{
    cout<<"Object is Born";
}
void ratio::display(void)
{
    cout<<"Object is Alive";
}

ratio::~ratio()
{
    cout<<"\n Object Dies";
}

int main()
{
    {
        ratio x;
        x.display();
    }
    
    return 0;
}