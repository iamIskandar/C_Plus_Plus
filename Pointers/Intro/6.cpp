#include<iostream>
using namespace std;

static int count=10;

void func()
{
	static int i=5;
	i++;
	cout<<"i is "<<i<<"\tand count is "<<count<<endl;
}
int main()
{
	while(count--)
	{
		func();
		
	}
	return 0;
}
