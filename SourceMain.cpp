#include "Header.h"
int main() {
	int** M, n;
	cin >> n;
	addMatrix(M, n);
	outMatrix(M, n);
	cout << "\nMax=" << Max(M, n);
	return 0;
}