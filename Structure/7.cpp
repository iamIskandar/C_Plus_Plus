#include<iostream>
using namespace std;

struct file{
	char name[50];
	char email[50];
	
};

main()
{
	file f[2];
	int choice;
	
	for(int i=0;i<2;i++)
	{
		cout<<""<<i+1<<endl;
		cout<<"Name=>";
		cin.getline(f[i].name,50);
		
		cout<<"Email=>";
		cin.getline(f[i].email,50);
		cout<<endl;
	}
	
	
	cout<<"Choose which record to be displayed=>";
	cin>>choice;
	cout<<endl;
	
	if(choice==1||choice==2)
	{
		for(int i=0;i<=choice;i++)
		{
			cout<<"Name=>"<<f[choice].name<<endl;
			cout<<"Email=>"<<f[choice].email<<endl;
		}
			
	}	
}
	

	
	

