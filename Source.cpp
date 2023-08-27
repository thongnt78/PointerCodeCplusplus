#include "Header.h"

void addMatrix(int**& M, int n) {
	M = new int* [n];
	for (int i = 0; i < n; i++)
	{
		*(M + i) = new int[n];
	}

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			*(*(M + i) + j) = -50 + rand() % 151;
		}
	}
}
void outMatrix(int** M, int n) {
	//M= new int* [n];
	//for (int i = 0; i < n; i++)
	//{
	//	*(M + i) = new int[n];
	//}
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			cout << *(*(M + i) + j) << " ";
		}
		cout << endl;
	}
}
int Max(int** M, int n) {
	int m = *(*(M + 0) + 0);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (m < *(*(M + i) + j))
				m = *(*(M + i) + j);
		}
	}
	return m;
}