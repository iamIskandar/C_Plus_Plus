#include<iostream>
using namespace std;

main()
{
	string s1;
	string s2;
	string result;
	
	cout<<"Enter s1=>";
	getline(cin,s1);
	
	cout<<"Enter s2=>";
	getline(cin,s2);
	
	result=s1+" "+s2;
	
	cout<<"\n"<<result;
}
