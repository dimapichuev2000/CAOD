#include <iostream>
#include "function.h"
#include"function2.h"
using namespace std;
const unsigned Col = 10;
const unsigned Row = 10;

int main()
{
	setlocale(LC_ALL, "Rus");
	
	float** matr = MakeArr(Row, Col);
	float** matr2 = MakeArr(Row, Col);
	
	//Inic(matr, Col, Row);
	rand_matr(matr, Col,-15,30);

	int i, j, m = Col, n = Row;
	bool isNull;

	cout << "исходная марица: " << endl;
	print(matr, Col, Row);

	/*for (i = 0; i < n; i++)  // Удаление строк
	{
		isNull = true;
		for (j = 0; j < m; j++)
		{
			if (matr[i][j] != 0)
			{
				isNull = false;
				break;
			}
		}
		if (isNull)
		{
			deleteRow(matr,n, m, i);
			n--;
			i--;
			print(matr, n, m);
		}
	}


	for (j = 0; j < m; j++)  // Удаление столбцов
	{
		isNull = true;
		for (i = 0; i < n; i++)
		{
			if (matr[i][j] != 0)
			{
				isNull = false;
				break;
			}
		}
		if (isNull)
		{
			deleteCol(matr,n, m, j);
			m--;
			j--;
			print(matr, n, m);
		}
	}
	*/
	
	cout << endl;
	//PologElm(matr);
	solve();
	print(matr, Col, Row);

	system("pause");
}
