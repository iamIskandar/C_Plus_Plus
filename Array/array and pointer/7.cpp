#include <iostream>
using namespace std;
 
void printSize(int *array)
{
    // array is treated as a pointer here
    cout<< sizeof(array) <<endl; // prints the size of a pointer, not the size of the array!
}
 
int main()
{
    int array[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
    cout << sizeof(array) <<endl; // will print sizeof(int) * array length
 
    printSize(array);
	} // the array argument decays into a pointer here
