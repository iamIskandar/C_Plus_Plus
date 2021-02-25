#include<iostream>
using namespace std;

void printNumber(int x)
{
	cout<<"I am printing an integter "<<x<<endl;
}

void printNumber(float y)
{
	cout<<"I am printing a float  "<<y<<endl;
}

main()
{
	printNumber(10);
	printNumber(10.10);
}
