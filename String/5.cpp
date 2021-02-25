#include<iostream>
using namespace std;

void pertama(string nama)
{
	cout<<"The string entered was=>"<<nama<<endl;
	
}

void kedua(char name[20])
{
	cout<<"The char array entered was=>"<<name<<endl;
}

main()
{
	string printName;
	char DisplayName[20];
	
	cout<<"Enter a string:";
	getline(cin,printName);
	
	cout<<"Enter  another string:";
	cin.get(DisplayName,20);
	cout<<endl<<endl;
	pertama(printName);
	kedua(DisplayName);
}
