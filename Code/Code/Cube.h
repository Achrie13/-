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
	int m_length;	// 立方体 长
	int m_width;	// 立方体 宽
	int m_height;	// 立方体 高
	int m_volume;	// 立方体 体积
	int m_area;		// 立方体 面积
};
