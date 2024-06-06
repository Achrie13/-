#include "Sort.h"
#include <algorithm>

void Sort::init(std::vector<DATA>&v) {
	m_v = v;
}
void Sort::Bubble() {
	for (int i = 0; i < m_v.size(); i++) {
		for (int j = 0; i < m_v.size() - i - 1; j++) {
			if (m_v[j] > m_v[j + 1])
				std::swap(m_v[j], m_v[j + 1]);
		}
	}
}
void Select();
void Shell();
void Insertion();

