#include<iostream>
#include<fstream>
using namespace std;

void increment(int &var)
{
	var+=100;
	
}

main()
{
	ofstream data;
	data.open("function.txt");
	
	int value=50;
	increment(value);
	data<<"Value of number is : "<<value<<endl;
	return 0;
}
