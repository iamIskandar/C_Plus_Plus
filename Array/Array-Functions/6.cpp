#include<iostream>
using namespace std;




main()
{
	int n;
	cout<<"Enter number of element of an array=>";
	cin>>n;
	cout<<endl;
	int array[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<" number "<<i+1<<" = ";
		cin>>array[i];
	}
		
		
	cout<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<endl;
	}
}
