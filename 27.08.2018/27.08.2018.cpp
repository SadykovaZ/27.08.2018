// 27.08.2018.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

int func(int a, int b)
{
	int n = 0;
	int res = 0;
	cout << "1- +; 2 - /; 3- *; 4- -; " << endl;
	cin >> n;
	switch (n)
	{
	case 1: res = a + b;
		break;
	case 2: res = a / b;
		break;
	case 3: res = a * b;
		break;
	case 4: res = a - b;
		break;
	}
	return res;
}

void oper(double *a, double *b, char o, double *res)
{
	if (o == '+')		*res = *a + *b;
	else if (o == '-')  *res = *a - *b;
	else if (o == '*')  *res = (*a)*(*b);
	else if (o == '/')
	{
		if (*b == 0)
		{
			cout << "Devision by zero";
			*res = 0;
		}
		else
			*res = *a / *b;
	}

}

void plus_arr(int *a, int b[], int c[], int n)
{
	for (int i = 0; i < n; i++)
	{
		c[i] = a[i] + b[i];
	}
}

//Написать программу, которая содержит функцию, принимающую в качестве аргумента, указатель на массив и размер массива, и заменяет отрицательные элементы на 0.

void zero(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			a[i] = 0;
	}
}
//Написать программу, которая содержит функцию, принимающую в качестве аргумента, указатели на два массива (А и В) и размеры массивов. Функция проверяет, является ли массив В подмножеством массива А и возвращает указатель на начало найденного фрагмента, если элемента нет, возвращает 0.

int *subarray(int *a, int n, int *b, int m)
{
	int *p1 = a, *p2 = b;
	int k = 1;
	for (; p2 < b + m; p2++)
	{
		for (; p1 < a + n; p1++)
		{
			if (*p1 == *p2)
			{
				for (int i = 1; i < m; i++)
				{
					if (*(p1 + i) == *(p2 + i))
						k++;
				}
			}
			if (k == m)
			{
				return p1;
			}
		}

		return nullptr;
	}

}
int func(int *a, int sizeA, int *b, int sizeB) {
	int s = 0;

	for (int i = 0; i < sizeB; i++)
	{
		for (int j = 0; j < sizeA; j++)
		{
			if (a[j] == b[i])  s++;
		}
	}
	if (s == sizeB) return true; else return false;

}
//Написать функцию, которая получает указатель на динамический массив и его размер. Функция должна удалить из массива все простые числа и вернуть указатель на новый динамический массив.
void erase_prime(int *a, int n)
{
	int *tmp;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]%1==0 && )
		{

		}
	}
}


int main()
{
	srand(time(NULL));

	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int b[] = { 1,2,3 };

	cout << *subarray(a, 9, b, 3) << endl;
	//int n = 9, n1 = 5;

	/*cout << "size = ";
	cin >> n;
	cout << "size2 = ";
	cin >> n1;*/

	/*a = new int[n];
	b = new int[n1];*/
	//cout << "*a = ";
	//for (int i = 0; i < n; i++)
	//{
	//	//a[i] = -5 + rand() % 20;
	//	cout << a[i] << " ";
	//}
	//cout << endl;

	//cout << "*b = ";

	//for (int i = 0; i < n1; i++)
	//{
	//	//b[i] = -5 + rand() % 20;
	//	cout << b[i] << " ";
	//}
	//cout << endl;

	//cout << func(a, n, b, n1) << endl;

	/*int *a;
	int n;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = -10 + rand() % 15;
		cout << a[i] << " ";
	}
	cout << endl;
	zero(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	delete[] a;*/
	/*int *a, *b, *c;
	int n;
	cin >> n;
	a = new int[n];
	b = new int[n];
	c = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = 1+ rand() % 51;
		b[i] = 1+ rand() % 41;
		cout << "a [" << i<< "] = " << a[i] << " " << "b [" << i << "]" << b[i]<<endl;
	}

	plus_arr(a, b, c, n);
	for (int i = 0; i < n; i++)
	{
		cout << c[i] << endl;
	}
	delete[] a;
	delete[] b;
	delete[] c;*/

	//double a, b, res=0;

	/*char operation;
	cin >> a >> operation >> b;
	oper(&a, &b, operation, &res);
	cout << res << endl;*/
	/*int a=5, *p, **pp;
	p = &a;
	pp = &p;
	cout << "&a = " << p << endl;
	cout << p << " " << &a << endl;
	cout << "&p ="<<pp <<" "<< &p << endl;
	cout << *(*pp) << endl;*/

	/*int *p;

	p = new int[10];
	delete [] p;
	p = nullptr;*/

	//double *p;
	//int n;
	//cin >> n;
	//p = new double[n];

	//for (int i = 0; i < n; i++)
	//{
	//	p[i] = 1.0 / (rand() % 20+1);
	//	cout << p[i] << " ";
	//}
	//delete[] p;

	//cout << endl;



	/*int k = 0;
	int a[7][8];
	int *p;


	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			a[i][j] = rand() % 101 - 20;
			if (a[i][j] < 0)
			{
				k++;
			}
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
	cout << k << endl;
	p = new int[k];
	int n = 0;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (a[i][j]<0)
			{
				p[n++] = a[i][j];
			}
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;*/

	//Заполнить двумерный массив размером 9*7 случайными числами в диапазоне от -50 до 150. Динамически создать одномерный массив, в который поместить все числа, кратные 3, 5 и 7 из двумерного массива.

	/*int a[9][7];
	int k = 0;
	int *p;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			a[i][j] = -50 + rand() % 150;
			if ((a[i][j] % 3 == 0) || (a[i][j] % 5 == 0) || (a[i][j] % 7 == 0))
			{
				k++;
			}
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
	cout << k << endl;
	p = new int[k];
	int n = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if ((a[i][j] % 3 == 0) || (a[i][j] % 5 == 0) || (a[i][j] % 7 == 0))
			{
				p[n++] = a[i][j];
			}
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << setw(3) << p[i];
	}
	cout << endl;

	delete[] p;*/

	//Написать функцию, которая “возвращает” (через свои аргументы) результат четырёх арифметических действий над своими двумя первыми аргументами вещественного типа. Решить задачу двумя способами.

	/*int a = 0, b = 0;
	cin >> a;
	cin >> b;
	cout << func(a, b) << endl;*/
	system("pause");
	return 0;
}

