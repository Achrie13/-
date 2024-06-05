#include "Cube.h"
void Cube::setLength(int length)
{
	m_length = length;
}
void Cube::setWidth(int width)
{
	m_width = width;
}
void Cube::setHeight(int height)
{
	m_height = height;
}
void Cube::setLengthWidthHeight(int length, int width, int height)
{
	m_length = length;  m_width = width; m_height = height;
}
int Cube::getLength()
{
	return m_length;
}
int Cube::getWidth()
{
	return m_width;
}
int Cube::getHeight()
{
	return m_height;
}
int Cube::getVolum()
{
	m_volume = m_length * m_width * m_height;
	return m_volume;
}
int Cube::getArea()
{
	m_area = 2 * (m_length * m_width + m_length * m_height + m_width * m_height);
	return m_area;
}
int Cube::isEquals(Cube& cube)
{
	if ((m_length == cube.getLength()) &&
		(m_width == cube.getWidth()) &&
		(m_height == cube.getHeight()))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}