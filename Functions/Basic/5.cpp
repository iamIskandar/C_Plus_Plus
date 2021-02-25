#include<iostream>
using namespace std;

class Rectangle
{
	private:
		double width;
		double length;
		
		public:
			void setWidth(double w)
			{
				width=w;
			}
			void setLength(double len)
			{
				length=len;
			}
			double getWidth(const)
			{
				return width;
			}
			double getLength(const)
			{
				return length;
			}
			double getArea()
			{
				return width*length;
			}
			
};
 
 main()
 {
 	Rectangle petak;
 	double lebaq;
 	double panjang;
 	
 	cout<<"Enter width=>";
 	cin>>lebaq;
 	petak.setWidth(lebaq);
 	
 	
 	cout<<"Enter Height=>";
 	cin>>panjang;
 	petak.setLength(panjang);
 	
 	cout<<"The area is "<<petak.getArea()<<endl;
 }
