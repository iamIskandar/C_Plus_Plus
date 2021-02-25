#include<iostream>
using namespace std;


main()
{
	int array[15];
	int element,largest,smallest,k=0;
	cout<<"Enter number of element:";
	cin>>element;
	cout<<endl;
	
	for(int i=1;i<element;i++)
	{
		cout<<"#"<<++k<<" : ";
		cin>>array[i];
	
		if(array[0]>array[i])
		{
			smallest=array[i];
		}
		
	}
	cout<<"smallest element is "<<smallest<<endl;
		

		
	
}
