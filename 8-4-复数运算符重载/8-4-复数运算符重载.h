#pragma once
class Complex {
public:
	Complex(double real = 0, double image = 0);
	Complex(const Complex & rightOp);//¿½±´¹¹Ôìº¯Êý
	void print();
	Complex operator +(const Complex & rightOp);
	Complex operator -(const Complex & rightOp);
	Complex operator -();
	Complex operator =(const Complex &rightOp);
private:
	double real;
	double image;
};
