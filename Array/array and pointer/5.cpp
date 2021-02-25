#include<iostream>
using namespace std;

main()
{
	int array[5] = { 9, 7, 5, 3, 1 };
 
// dereferencing an array returns the first element (element 0)
	cout << *array<<endl; // will print 9!
 
	char name[] = "Jason"; // C-style string (also an array)
	cout << *(name+1)<<endl; 
	
	int *pointer;
	pointer=array;
	
	cout<<*pointer<<endl;
	cout<<*(name+1);
}

