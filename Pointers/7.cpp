#include<iostream>
using namespace std;

main()
{
	int number[5];
	int total=0;
	
	cout<<"Enter 5 numbers \n";
	
	for(int i=0;i<=5;i++)
	{
		cin>>number[i];
		total+=number[i];
	}
	cout<<total<<endl;
	
}
