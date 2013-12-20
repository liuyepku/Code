#include<iostream>
#include"Complex.h"
using namespace std;

Complex::Complex(const Complex &c)
{
	real = c.real;
	virt = c.virt;
}

Complex::~Complex()
{
	std::cout<<"it is just a joke!!!!!!"<<std::endl;
}

Complex& Complex::operator=(const Complex &c)
{
	real = c.real;
	virt = c.virt;
	return  *this;
}

Complex Complex::operator+(const Complex &a)
{
	Complex temp;	
	temp.real = real + a.real;
	temp.virt = virt + a.virt;
	return temp;
}

Complex Complex::operator-(const Complex &a)
{	
	Complex temp;
	temp.real = real - a.real;
	temp.virt = virt - a.virt;
	return temp;
}


Complex Complex::operator*(const Complex &b)
{
	Complex temp;
	temp.real = real*b.real - virt*b.virt;
	temp.virt = real*b.virt + virt*b.real;
	return temp;
}

Complex Complex::operator/(const Complex &b)
{
	Complex tem;
	double temp = b.real * b.real + b.virt * b.virt;
	tem.real = real * b.real + virt * b.virt;
	tem.virt = virt * b.real - real * b.virt;
	return tem;
}

void Complex::Set(double realnum, double virtnum)
{
	real = realnum;
	virt = virtnum;

}

void Complex::Set(const Complex &c)
{
	real = c.real;
	virt = c.virt;

}

void Complex::Get(double &realnum, double &virtnum)
{
	realnum = real;
	virtnum = virt;
}

Complex& Complex::Get()
{
	Complex *temp = new Complex;
	temp->Set(real, virt);
	return *temp;
}

void Complex::Print()
{	
	if(virt>0)
	{	std::cout<<"The complex number is "<<real<<"+"<<virt<<"i"<<std::endl;}
	else if(virt<0)
	{ 	std::cout<<"The complex number is "<<real<<"-"<<virt<<"i"<<std::endl;}
	else
	{ std::cout<<"The complex number is "<<real<<std::endl;}

}

