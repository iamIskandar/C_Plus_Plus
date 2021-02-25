#include<iostream>
using namespace std;

main()
{
	
	int size=5;
	
	cout<<"Enter the size of the array=>";
	cin>>size;
	cout<<endl;
	int*ptr;
	ptr=new int[];
	
	cout<<"Enter the element=>\n";
	for(int i=0;i<size;i++)
	{
		cout<<"#"<<i+1<<" : ";
		cin>>ptr[i];
		
	}
	
	cout<<"\nDisplaying the values\n";
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<endl;
	}
}
