#include<iostream>
using namespace std;

struct Record{
	string name;
	char number[25];
};

main()
{
	Record d;
	cout<<"name=>";
	getline(cin,d.name);
	
	cout<<"number=>";
	cin.getline(d.number,25);
	
	
	
	Record *r=&d;
	
	cout<<"\n\ndisplay data\n";
	cout<<"name=>"<<r->name<<endl;
	cout<<"number=>"<<r->number<<endl;
}
