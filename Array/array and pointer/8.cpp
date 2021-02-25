#include<iostream>
using namespace std;

void printSize(int *arr)
{
	cout<<sizeof(arr);
}
main()
{
	int array[5]={10,20,30,40,50};
	
	cout<<sizeof(array)<<endl;
	printSize(array);
}
