#include "Header.h"
int** Allocation(int n) {
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		*(a + i) = new int[n];
	}
	return a;
}
void addMatrix(int**& a, int n) {
	a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		*(a + i) = new int[n];
	}
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			*(*(a + i) + j) = rand() % 11;
		}
	}
}
void outMatrix(int** a, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << *(*(a + i) + j) << " ";
		}
		cout << endl;
	}
}
void mainDiagonal(int** a, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << *(*(a + i) + i) << " ";
	}
}
void mauxiliaryDiagonal(int** a, int n) {
	for (int i = 0; i < n; i++)
	{
			cout << *(*(a + i) + n - i - 1) << " ";
	}
}
int sumArrayMatrix(int** a, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum+=*(*(a + i) + j);
		}
	}
	return sum;
}
//void deleteMatrix(int n) {
//	for (int i = 0; i < n; i++)
//	{
//		delete* (a + i);
//	}
//}