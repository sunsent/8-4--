#include"8-4-¸´ÊıÔËËã·ûÖØÔØ.h"
#include<iostream>
using namespace std;
int main() {
	Complex c1(1, 2);
	Complex c2(2);
	Complex c3(c1);

	c1.print();
	c3.print();
	c2.operator=(c3.operator-());
	//c2 = -c3;
	c3 = c2.operator-(c1);//c3=c2-c1
	c3.print();
	int end;
	cin >> end;
	return 0;
}