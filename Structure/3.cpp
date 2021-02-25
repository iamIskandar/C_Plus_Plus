#include<iostream>
using namespace std;

struct data{
	string name;
	int age;
	double salary;
};

main()
{
	data d[2];
	
	cout<<"Enter user personal details\n\n";
	
	for(int i=0;i<2;i++)
	{
		cout<<"#"<<i+1<<endl;
		cout<<"Name=>";
		getline(cin,d[i].name);
		
		cout<<"Age=>";
		cin>>d[i].age;
		
		cout<<"Salary=>";
		cin>>d[i].salary;
		cout<<endl<<endl;
		cin.ignore();
	}
	cout<<endl<<endl<<"Displaying data\n\n";
	for(int i=0;i<2;i++)
	{
		cout<<"Name=>"<<d[i].name<<endl;
		cout<<"Age=>"<<d[i].age<<endl;
		cout<<"Salary=>"<<d[i].salary<<endl;
		cout<<endl<<endl;
		
	}
	
}
