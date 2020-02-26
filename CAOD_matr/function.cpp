#include <iostream>
#include "function.h"

using namespace std;

void rand_matr(float**& Arr, int n, int min, int max)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
		Arr[i][j] = rand() % max + min;
	    }
}
float** MakeArr(const unsigned& Row, const  unsigned& Col)
{
	float** Arr;
	Arr = new float* [Row];
	for (unsigned i = 0; i < Row; i++)
		Arr[i] = new float[Col];

	return Arr;
}

void deleteRow(float**& Arr,int n, int m, int row)
{
	int i, j;
	cout << "удаление строки : " << row << endl;
	for (i = row; i < n - 1; i++)
	{
		for (j = 0; j < m; j++)
		{
			Arr[i][j] = Arr[i + 1][j];
		}
	}
}
void deleteCol(float**& Arr,int n, int m, int col)
{
	int i, j;
	cout << "удаление стобца: " << col << endl;
	for (j = col; j < m - 1; j++)
	{
		for (i = 0; i < n; i++)
		{
			Arr[i][j] = Arr[i][j + 1];
		}
	}
}
void print(float**& Arr, const unsigned& Row, const unsigned& Col) {
	for (unsigned i = 0; i < Row; i++) {

		for (unsigned j = 0; j < Col; j++)
		{
			cout << Arr[i][j] << "   ";
		}
		cout << endl;
	}

}
void Inic(float**& Arr, const unsigned& Row, const  unsigned& Col)
{
	for (unsigned i = 0; i < Row; i++)
	{
		for (unsigned j = 0; j < Col; j++)
		{
			cout << "Arr[" << i << "][" << j << "] = \t";
			cin >> Arr[i][j];
		}
	}
}
void PologElm(float**& Arr) {
	bool flag;
	unsigned i=0;
	for (unsigned i = 0; i < 5; i++)
	{
		for (unsigned j = 0; j < 5; j++)
		{
			if (Arr[i][j] > 0)
			{
				flag= true;
				break;
			}
		}
		if (flag)
			break;
	}

	if (flag)
		cout << "номер строки = " << i;
	else
		cout << "нет положительных элементов в строке";
}