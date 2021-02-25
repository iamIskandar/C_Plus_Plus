#include<iostream>
using namespace std;

main()
{
	string str;
	cout<<"Enter name=>";
	getline(cin,str);
	
	int count=0;
	int kira=0;
		
	
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='A'||str[i]=='a')
		{
			++count;
		}
		if(str[i]=='M'||str[i]=='m')
		{
			++kira;
		}
	}
	cout<<"The number of "<<'A'<<" and "<<'a'<<" is : "<<count<<endl;
	cout<<"The number of "<<'M'<<" and "<<'m'<<" is  : "<<kira<<endl;
}
