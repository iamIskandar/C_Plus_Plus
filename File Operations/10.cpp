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
	//cout<<"READING FROM FILE\n\n";
	cout<<"Reading from file\n\n";
	
	char arr[100];
	ifstream inFile;
	inFile.open("iskay.txt");
	
		
		while(inFile.getline(arr,100))
		{
			cout<<arr;
		}
		inFile.close();
	
	
}
