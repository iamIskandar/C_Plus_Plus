#include<iostream>
#include<new>
using namespace std;

main()
{
	int element=5;
	

	
	int *p=new int[element];
	
	if(p==NULL)
	{
		cout<<"Error allocating memory\n";
	}
	else
	{
		for(int i=0;i<element;i++)
		{
			cout<<"#"<<i+1<<" = ";
			cin>>p[i];
		}
		cout<<"\nDisplaying values\n";
		for(int i=0;i<element;i++)
		{
			cout<<"#"<<i+1<<" = "<<p[i]<<endl;
		}
		delete[]p;
		{
			cout<<"All being deleted\n";
		}
	}
}
