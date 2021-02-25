#include<iostream>
using namespace std;

main()
{
	int number;
	int n;
	cout<<"Enter the number of element to be strored=>";
	cin>>n;
	int *ptr;
	cout<<endl;
	
	ptr=new int[n];
	
	cout<<"Enter the number:\n";
	for(int i=0;i<n;i++)
	{
		cin>>ptr[i];
	}
	
	cout<<"Displaying the value:\n";
	for(int i=0;i<n;i++)
	{
		cout<<ptr[i]<<endl;
	}	
	
	delete[]ptr;
	{
		cout<<"deleted\n";
	}
}
