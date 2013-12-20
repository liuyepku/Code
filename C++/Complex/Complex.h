#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public: 
	Complex(){real = 0; virt = 0;};
	Complex(int realnum, int virtnum){real = (double)realnum; virt = (double)virtnum;};
	Complex(double realnum, double virtnum){real = realnum; virt = virtnum;};
	Complex(const Complex &c);
	Complex& operator=(const Complex&);
	Complex operator+(const Complex&);
	Complex operator-(const Complex&);
	Complex operator*(const Complex&);
	Complex operator/(const Complex&);
	

	void Set(double realnum, double virtnum);
	void Set(const Complex &c);
	void Get(double &realnum, double &virtnum);
	Complex& Get();
	void Print(); 
		
	~Complex();

private: 
	static int num;
	double real;
	double virt;
	
};


#endif
