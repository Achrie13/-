#pragma once
#include <vector>

typedef int DATA;
class Binary_Search {
private:
	std::vector<DATA>m_v;
public:
	void init(std::vector<DATA>);
	int search1(int target);
	int search2(int target);
	std::vector<int> search3(int target);
};