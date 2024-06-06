#pragma once
#include <vector>
typedef int DATA;

class Sort {
private:
	std::vector<DATA> m_v;
public:

	void init(std::vector<DATA>&);
	void Bubble();
	void Select();
	void Shell();
	void Insertion();
};