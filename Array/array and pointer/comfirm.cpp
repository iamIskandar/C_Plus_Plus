#include<iostream>
using namespace std;

main()
{
	int array[20];
	int element;
	int max;
	int min;
	
	cout<<"Enter number of element=>";
	cin>>element;
	cout<<endl;
	
	for(int i=0;i<element;i++)
	{
		cout<<"#"<<i+1<<" : ";
		cin>>array[i];
	}
	
	max=array[0];
	min=array[0];
	
	for(int i=0;i<element;i++)
	{
		if(array[i]<min)
		{
			min=array[i];
		}
	
		W
		if(array[i]>max)
		{
			max=array[i];	
		}
	
	}
	cout<<endl;
	cout<<"Largest: "<<max<<endl;
	cout<<"Minimum: "<<min;
}
