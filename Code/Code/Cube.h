#pragma once
class Cube
{
public:
	void setLength(int length);
	void setWidth(int width);
	void setHeight(int height);
	void setLengthWidthHeight(int length = 0, int width = 0, int height = 0);
	int getLength();
	int getWidth();
	int getHeight();
public:
	int getVolum();
	int getArea();
public:
	int isEquals(Cube& cube);
private:
	int m_length;	// ������ ��
	int m_width;	// ������ ��
	int m_height;	// ������ ��
	int m_volume;	// ������ ���
	int m_area;		// ������ ���
};
