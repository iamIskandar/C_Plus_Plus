#include<iostream>
#include<fstream>
using namespace std;

struct person{
	char name[50];
	int age;
	char id [50];
	char phone[50];
	
};

main()

{
	person p;
	cout<<"Enter your personal details\n\n";
	
	cout<<"Name=>";
	cin.getline(p.name,50);
	
	cout<<"Age=>";
	cin>>p.age;
	cin.ignore();
	
	cout<<"ID=>";
	cin.getline(p.id,50);
	
	cout<<"Contact Number=>";
	cin.getline(p.phone,50);
	
	
	cout<<"\nYour personal details are recorded\n";
	
	ofstream dataFile;
	dataFile.open("record.txt");
	
	if(dataFile.is_open())
	{
		dataFile<<"Record are as follows\n";
		dataFile<<"Name =>"<<p.name<<endl;
		dataFile<<"Age =>"<<p.age<<endl;
		dataFile<<"ID => "<<p.id<<endl;
		dataFile<<"Contact Number =>"<<p.phone<<endl;
	
	}
	else
	{
		cout<<"Error writing to files";
	}
	dataFile.close();
}
