#include<iostream>
using namespace std;

main()
{
	int num;
	char letter[10];
	
	cout<<"Number=>";
	cin>>num;
	cin.ignore();
	//sebab dia anngap enter as one character jugak
	
	cout<<"Enter a whitespace character=>";
	cin.get(letter,10);
	
	cout<<num<<endl;
	cout<<letter;
}
