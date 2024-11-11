#pragma once
//基类
class shape
{
public:
	virtual double area() const = 0;// =0标记该函数为纯虚函数
	virtual ~shape() {}// 虚析构函数，派生类生成默认的析构函数吗,否则派生类调用基类的析构函数,可能导致资源泄露
};

//派生类矩形
class rectangle :public shape
{
protected:
	double width, length;
public:
	//构造函数
	rectangle(double w, double l) :width(w), length(l) {}

	//area()函数覆写，实现纯虚函数
	double area() const override {
		return width * length;
	}
};

//派生类圆
class circle :public shape {
private:int p = 1;
protected:
	double radius;
public:
	//构造函数
	circle(double r) :radius(r) {}

	//area()函数覆写，实现纯虚函数
	double area()const override {
		return 3.14159 * radius * radius;
	}
};