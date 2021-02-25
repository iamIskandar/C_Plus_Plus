#include<iostream>
using namespace std;

void print(int i)
{
	cout<<"Here is int "<<i<<endl;
}
void print(double f)
{
	cout<<"Here is a double "<<f<<endl;
}
main()
{
	print(10);
	print(10.10);
}
