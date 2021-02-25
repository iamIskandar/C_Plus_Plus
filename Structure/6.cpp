#include<iostream>
using namespace std;

struct personal{
	char name[50];
	char course[50];
	char email[50];
	double cgpa;
};

main()
{
	personal p;
	personal *ptr=&p;
	
	cout<<"Enter those reuirements\n\n";
	
	cout<<"Name=>";
	cin.getline(p.name,50);
	
	cout<<"Course=>";
	cin.getline(p.course,50);
	
	cout<<"CGPA=>";
	cin>>p.cgpa;
	cin.ignore();
	
	cout<<"e-mail=>";
	cin.getline(p.email,50);
	
	
	cout<<"\n\nDisplay Records\n";
	
	cout<<"Name=>"<<ptr->name<<endl;
	cout<<"Course=>"<<ptr->course<<endl;
	cout<<"e-mail=>"<<ptr->email<<endl;
	cout<<"CGPPA=>"<<ptr->cgpa;
	cout<<endl;
	
	
	if(ptr->cgpa>=3.5&&ptr->cgpa<=4.00)
	{
		cout<<"Excellent!!!";
	}
	else if(ptr->cgpa>=2.8&&ptr->cgpa<3.5)
	{
		cout<<"Great!!!";
	}
	else if(ptr->cgpa>=2.0&&ptr->cgpa<2.8)
	{
		cout<<"Failed";
	}
	else
	{
		cout<<"Invalid CGPA";
	}
	
}
