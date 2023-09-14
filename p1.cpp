#include<iostream>
using namespace std;


class Complex {
	int real;
	int complex;
	
public:
	
	void setvalue(int r,int c) {
	real=r;
	complex=c;
	}
	
	Complex add(Complex c1,Complex c2) {
		Complex c3;
	c3.real=c1.real+c2.real;
	c3.complex=c1.complex+c2.complex;
	
	return c3;
	
	}
	
	Complex sub(Complex c1,Complex c2) {
	Complex c3;
	
	c3.real=c1.real-c2.real;
	c3.complex=c1.complex-c2.complex;
	
	return c3;
	}
	
	Complex mul(Complex c1,Complex c2) {
	Complex c3;
	c3.real=c1.real*c2.real-c1.complex*c2.complex;
	c3.complex=c1.real*c2.complex+c2.real*c1.complex;
	return c3;
	}
	
	void getvalue() {
	cout<<"the complex is "<<real<<"+i"<<complex<<endl;
	}
	
};
int main() {

Complex c1,c2,c3;
c1.setvalue(2,3);
c2.setvalue(4,5);

c1.getvalue();
c2.getvalue();

cout<<"After Addition";
c3=c3.add(c1,c2);
c3.getvalue();

cout<<"After subtraction";
c3=c3.sub(c1,c2);
c3.getvalue();

cout<<"After Multiplication";
c3=c3.mul(c1,c2);
c3.getvalue();

}



















