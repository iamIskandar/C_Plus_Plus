#include <iostream>
using namespace std;
int main()
{
    int array[5] = { 9, 7, 5, 3, 1 };
 
    // print address of the array's first element
    cout << "Element 0 has address: " << &array[0] <<endl;
 
    // print the value of the pointer the array decays to
    cout << "The array decays to a pointer holding address: " << array;
 
 
    return 0;
}
