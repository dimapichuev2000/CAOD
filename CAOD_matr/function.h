#pragma once
#include <iostream>
#include<vector>;

using namespace std; 

void rand_matr(float**& Arr, int n, int min, int max);
float** MakeArr(const unsigned& Row, const unsigned& Col);
void print(float**& Arr, const unsigned& Row, const unsigned& Col);
void Inic(float**& Arr, const unsigned& Row, const unsigned& Col);
void PologElm(float**& Arr);
void deleteRow(float**& Arr, int n, int m, int row);
void deleteCol(float**& Arr, int n, int m, int col);

