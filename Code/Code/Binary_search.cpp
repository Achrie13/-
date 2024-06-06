#include "Binary_Search.h"
typedef int DATA;
Binary_Search::Binary_Search() {};//显式默认构造函数，可以自定义初始化，隐式构造函数只会进行默认初始化
Binary_Search::Binary_Search(std::vector<DATA>& v) {//构造函数重载
	m_v = v;
};

int Binary_Search::search1(int target) {//左闭右闭的二分查找
	int left = 0;
	int right = m_v.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (m_v[mid] > target) {
			right = mid - 1;
		}
		else if (m_v[mid] < target) {
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
int Binary_Search::search2(int target) {//左闭右开的二分查找
	int left = 0;
	int right = m_v.size();
	while (left < right) {
		int mid = left + (right - left) / 2;
		if (m_v[mid] > target) {
			right = mid;
		}
		else if (m_v[mid] < target) {
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
std::vector<int> Binary_Search::search3(int target) {
	std::vector<int> res;
	int left = 0;
	int right = m_v.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (m_v[mid] < target) {
			left = mid + 1;
		}
		else if (m_v[mid] > target) {
			right = mid - 1;
		}
		else {
			for (int i = mid; i >= 0 && m_v[i] == target; i--) {
				res.push_back(i);
			}
			for (int i = mid + 1; i < m_v.size() && m_v[i] == target; i++) {
				res.push_back(i);
			}
			return res;
		}
	}
	if (res.size() == 0)
		res.push_back(-1);
	return res;
}