#include<iostream>
using namespace std;

void swap(int *var1, int *var2)
{
	int z;
	z=*var1;
	*var1=*var2;
	*var2=z;
}

main()
{
	int a=500;
	int b=800;
	
	cout<<"Before swapping"<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
	swap(&a,&b);
	
	cout<<"After swapping"<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
}
