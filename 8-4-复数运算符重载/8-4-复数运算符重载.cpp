#include"8-4-复数运算符重载.h"
#include<iostream>

using namespace std;

Complex::Complex(double real , double image ) {
	this->real = real;
	this->image = image;
}
Complex::Complex(const Complex & rightOp) {//拷贝构造函数
	this->real = rightOp.real;
	this->image = rightOp.image;
}
Complex Complex::operator +(const Complex &rightOp) {
	double real = this->real + rightOp.real;
	double image = this->image + rightOp.image;
	Complex res(real, image);
	return res;
}
Complex Complex::operator-(const Complex& rightOp) {
	double real = this->real - rightOp.real;
	double image = this->image - rightOp.image;
	Complex res(real, image);
	return res;
}
Complex Complex::operator-() {
	Complex res(-this->real, -this->image);
	return res;
}
Complex Complex::operator=(const Complex& rightOp) {
	this->real = rightOp.real;
	this->image = rightOp.image;
	return *this;
}
void Complex::print() {
	cout << "real = " << real << "\n";
	cout << "image = " << image << endl;
}