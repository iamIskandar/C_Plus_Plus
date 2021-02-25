// functionoverloading.cpp
 #include <iostream>
 using namespace std;
 void display ( ) //function with no arguments
{
  int a = 3;
  cout << a << endl;
}
void display (int a ) //function with one integer argument
{
  cout << a << endl;
}
void display (double a ) //function with one floating argument
{
   cout << a << endl;
}
void display(int a, float b) //function with one integer and one floating arguments
{
   cout<< a << " , " << b << endl;
}

int main()
{
  display(); //
  display(5); //
  display(2.3); //
  display(5,4.0); //
  return 0;
 } //end of pro
