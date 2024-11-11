#pragma once
//����
class shape
{
public:
	virtual double area() const = 0;// =0��Ǹú���Ϊ���麯��
	virtual ~shape() {}// ����������������������Ĭ�ϵ�����������,������������û������������,���ܵ�����Դй¶
};

//���������
class rectangle :public shape
{
protected:
	double width, length;
public:
	//���캯��
	rectangle(double w, double l) :width(w), length(l) {}

	//area()������д��ʵ�ִ��麯��
	double area() const override {
		return width * length;
	}
};

//������Բ
class circle :public shape {
private:int p = 1;
protected:
	double radius;
public:
	//���캯��
	circle(double r) :radius(r) {}

	//area()������д��ʵ�ִ��麯��
	double area()const override {
		return 3.14159 * radius * radius;
	}
};