#include <iostream>
using namespace std;
int main()
{
	int array[5] = { 9, 7, 5, 3, 1 };
 
	cout << sizeof(array) << '\n'; // will print sizeof(int) * array length
 
        int *ptr = array;
        cout<<sizeof(ptr) << '\n'; // will print the size of a pointer
 
	return 0;
}
