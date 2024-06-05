#pragma once
class Cube
{
public:
	// 设置立方体的长度
	void setLength(int length);

	// 设置立方体的宽度
	void setWidth(int width);

	// 设置立方体的高度
	void setHeight(int height);

	// 同时 设置立方体的长度 宽度 高度
	// 同时 设置 默认参数
	void setLengthWidthHeight(int length = 0, int width = 0, int height = 0);

	// 获取立方体的长度
	int getLength();

	// 获取立方体的宽度
	int getWidth();

	// 获取立方体的高度
	int getHeight();
public:
	// 获取立方体的体积
	int getVolum();

	// 获取立方体的面积
	int getArea();

public:
	// 立方体对比
	int isEquals(Cube& cube);
private:
	// 成员变量推荐前面添加 m_ 前缀
	int m_length;	// 立方体 长
	int m_width;	// 立方体 宽
	int m_height;	// 立方体 高
	int m_volume;	// 立方体 体积
	int m_area;		// 立方体 面积
};
