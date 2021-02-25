#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

main()
{
	ofstream myFile;
	myFile.open("example.txt");
	myFile<<"My name is mohammad irfan iskandar";
	
	myFile.close();
	
}
