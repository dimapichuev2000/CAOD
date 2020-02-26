#include <iostream>
#include "function2.h"


using namespace std;
void solve() {
	int i = 0, j = 0;
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			matr3[i][j] = sr(i, j);
		}
	}
}

double sr(int i, int j) {

	int k = 0, l = 0;
	double sum = 0.0;
	int count = 0;
	for (k = i - 1; k <= i + 1; ++k) {
		for (l = j - 1; l <= j + 1; ++l) {
			if (k < 0 || k == n || l < 0 || l == n)continue;
			sum += matr2[k][l];
			count++;
		}
	}
	
	return sum / count;
}