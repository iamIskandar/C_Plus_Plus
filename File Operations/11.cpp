#include<iostream>
#include<fstream>
using namespace std;

main()

{
	char name[100];
	cout<<"enter your name and age=>";
	cin.getline(name,100);
	
	ofstream outFile;
	outFile.open("iskay.txt");
	
	outFile<<name;
	outFile.close();
	cout<<endl<<endl;
	cout<<"Reading from file\n";
	
	char arr[100];
	ifstream inFile;
	inFile.open("iskay.txt");
	
	
		while(!inFile.eof())
		{
			inFile>>arr;
			cout<<arr<<" ";
		}
	
	
}
