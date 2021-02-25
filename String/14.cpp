#include<iostream>
#include<cstring>
using namespace std;

main()
{
	string nama="iskandar";
	char name[]="HUMAIRA";
	 
	string result,outcome,keputusan;
	for(int i=0;i<nama.size();i++)
	{
		result=(toupper(nama[i]));
		cout<<result;
	}
	cout<<endl;
	
	for(int i=0;nama[i]!='\0';i++)
	{
		outcome=(tolower(name[i]));
		cout<<outcome;
	}
	cout<<endl;
	
	
}
