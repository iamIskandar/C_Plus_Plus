#include<iostream>
using namespace std;

main()
{
	int arr[15];
	int element;
	int max;
	int min;
	
	cout<<"Enter number of elements=>";
	cin>>element;
	cout<<endl;
	
	for(int i=0;i<element;i++)
	{
		cout<<"#"<<i+1<<" = ";
		cin>>arr[i];
	}
	
	
	min=arr[0];
	max=arr[0];
	
	for(int i=1;i<element;i++)
	{
		if(arr[i]<min)
		min=arr[i];
		
		if(arr[i]>max)
		max=arr[i];
	}
	cout<<endl;
	cout<<"Largest=> "<<max<<endl;
	cout<<"Smallest=>"<<min<<endl;
	
}

