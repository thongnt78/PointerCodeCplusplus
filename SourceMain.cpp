#include "Header.h"
int main() {
	int n = 5;
	int** a;
	addMatrix(a, n);
	cout << "value of Matrix: "<<endl;
	outMatrix(a, n);
	cout << "\nMain diagonal: " << endl;
	mainDiagonal(a, n);
	cout << "\nmauxiliary Diagonal: " << endl;
	mauxiliaryDiagonal(a, n);
	cout << endl;
	int sum = sumArrayMatrix(a, n);
	cout << sum;
	for (int i = 0; i < n; i++)
	{
		delete* (a + i);
	}delete a;
	return 0;
}