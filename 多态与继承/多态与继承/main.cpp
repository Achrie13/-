//������һ�������shape���д��麯��area()����shape������circle���rectangle��
#include <iostream>
#include "shape.h"

using namespace std;

int main(void)
{
	circle c(2);
	cout << "Բ�ε����:" << c.area() << endl;
	rectangle r(2, 3);
	cout << "���ε����:" << r.area() << endl;
	return 0;
}
