#include<iostream>
using namespace std;

void passByValue(int x, int y)
{
	x+10;
	y+10;
}

main()
{
	int a=50;
	int b=100;
	
	cout<<"Before function call value of a is : "<<a<<endl;
	cout<<"Before function call value of b is : "<<b<<endl;
	
	passByValue(a,b);
	
	cout<<"After function call value of a is : "<<a<<endl;
	cout<<"After function call value of b is : "<<b<<endl;
}
