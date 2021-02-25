#include<iostream>
using namespace std;
//bila kat function kita declare parameter dulu
void myFunction(string name)
{
	cout<<name<<" comel\n";
}

main()
{
	//bila masuk sini parameter jadi arguments
	myFunction("Aisyah");
	myFunction("Dania");
	myFunction("Irdina");
	return 0;
}
