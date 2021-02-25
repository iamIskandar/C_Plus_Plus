#include<iostream>
using namespace std;

main()
{
	string s1,s2,s3,result;;
	string s5=" ";
	
	cout<<"Enter s1=>";
	getline(cin,s1);
	
	cout<<"Enter s2=>";
	getline(cin,s2);
	
	cout<<"Enter s3=>";
	getline(cin,s3);
	
	result=s1+s5+s2+s5+s3;
	
	cout<<"\n"<<result;	
}
