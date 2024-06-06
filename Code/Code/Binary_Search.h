#pragma once
#include <vector>
typedef int DATA;
class Binary_Search {
private:
	std::vector<DATA>m_v;
public:
	Binary_Search();
	Binary_Search(std::vector<DATA>&v);
	int search1(int target);
	int search2(int target);
	std::vector<int> search3(int target);
};