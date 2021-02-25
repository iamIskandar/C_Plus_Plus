#include<iostream>
using namespace std;
//global variable
int x;

void saja()
{
	cout<<x;
}

int main()
{
	//local variable
	int x=50;
	cout<<x<<endl;
	saja();
	return 0;
}
