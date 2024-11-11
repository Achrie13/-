//现在有一个虚基类shape，有纯虚函数area()，由shape派生出circle类和rectangle类
#include <iostream>
#include "shape.h"

using namespace std;

int main(void)
{
	circle c(2);
	cout << "圆形的面积:" << c.area() << endl;
	rectangle r(2, 3);
	cout << "矩形的面积:" << r.area() << endl;
	return 0;
}
