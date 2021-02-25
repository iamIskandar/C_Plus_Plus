#include<iostream>
using namespace std;

main()
{
	char str[20];
	int a;
	
	cout<<"Enter any number=>";
	cin>>a;
	cin.ignore();
	
	cout<<"String=>";
	cin.getline(str,20);
	
	cout<<str<<" "<<a;
	
}
