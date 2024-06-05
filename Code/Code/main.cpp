#include <iostream>

#include "config.cpp"
#include "Cube.h"
using namespace std;

int main() {
	Cube c1, c2;
	c1.setLengthWidthHeight(1, 2, 3);
	c2.setLengthWidthHeight(2, 3, 4);
	cout << "c1 中持 : " << c1.getArea() << " , c1 悶持 : " << c1.getVolum() << endl;
	cout << "c2 中持 : " << c2.getArea() << " , c2 悶持 : " << c2.getVolum() << endl;
	cout << c1.isEquals(c2) << endl;


	return 0;
}


