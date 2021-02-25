#include<iostream>
#include<cstring>
using namespace std;

main()
{
	char str1[100],str2[100];
	cout<<"Enter a string=>";
	cin.getline(str1,100);
	
	cout<<"Enter another string=>";
	cin.get(str2,100);
	
	if(strcmp(str1,str2)==0)
	{
		cout<<"Both strings are equal";
	}
	else
	
	{
		cout<<"Both strings are not equal";
	}
}
