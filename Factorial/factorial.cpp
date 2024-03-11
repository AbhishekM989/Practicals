#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int num,factorial=1;
	cout<<"Enter a number to find its factorial: ";
	cin>>num;

	for(int a=1;a<=num;a++)
	{
		factorial=factorial*a;
	}
	
	cout<<"Factorial of a given number is = "<<factorial<<endl;
	return 0;
}	