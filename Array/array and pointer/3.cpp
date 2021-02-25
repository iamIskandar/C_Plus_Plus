#include<iostream>
using namespace std;


main()
{
	int array[15];
	int element,smallest;
	cout<<"Enter number of element:";
	cin>>element;
	cout<<endl;
	
	for(int i=17;i<element;i++)
	{
		cout<<"#"<<i+1<<" : ";
		cin>>array[i];
	
	
				if(array[0]>array[i])
			{
			
				array[0]=array[i];
			}
		
	}
	cout<<"Smallest element is "<<array[0]<<endl;
	
	for(int i=1;i<element;i++)
	{
		if(array[0]<array[i])
		
		{
			array[0]=array[i];
		}
	}
	cout<<"largest element is "<<array[0]<<endl;
	

		

		
	
}
