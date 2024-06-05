#pragma once
class Cube
{
public:
	// ����������ĳ���
	void setLength(int length);

	// ����������Ŀ��
	void setWidth(int width);

	// ����������ĸ߶�
	void setHeight(int height);

	// ͬʱ ����������ĳ��� ��� �߶�
	// ͬʱ ���� Ĭ�ϲ���
	void setLengthWidthHeight(int length = 0, int width = 0, int height = 0);

	// ��ȡ������ĳ���
	int getLength();

	// ��ȡ������Ŀ��
	int getWidth();

	// ��ȡ������ĸ߶�
	int getHeight();
public:
	// ��ȡ����������
	int getVolum();

	// ��ȡ����������
	int getArea();

public:
	// ������Ա�
	int isEquals(Cube& cube);
private:
	// ��Ա�����Ƽ�ǰ����� m_ ǰ׺
	int m_length;	// ������ ��
	int m_width;	// ������ ��
	int m_height;	// ������ ��
	int m_volume;	// ������ ���
	int m_area;		// ������ ���
};
