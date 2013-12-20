#include"Complex.h"
#include<iostream>

int main()
{

	Complex c;
	Complex d = Complex(3,4);
	
	Complex a(1,5);
	Complex b(a);
	
	a.Print();
	b.Print();	
	c.Print();
	d.Print();
	
	std::cout<<"operator overloading tests"<<std::endl;
	Complex e(a+b);	
	c = a+b;
	a.Print();
	c.Print();
	e.Print();
		
	return 0;

}
