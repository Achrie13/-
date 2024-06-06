#include <iostream>
#include "config.h"
#include "Cube.h"
#include "Binary_Search.h"
#include "Sort.h"
using namespace std;
#define N 10

void Bubble(vector <int>& v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v.size() - i - 1; j++) {
			if (v[j] > v[j + 1])
				swap(v[j], v[j + 1]);
		}
	}
}
int main() {
	srand(1);
	vector<int>v;
	for (int i = 0; i < N; i++) {
		v.push_back(rand() % 10);
		cout << v[i] << ' ';
	}cout << endl;
	
	return 0;
}