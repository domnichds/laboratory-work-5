#include <iostream>
#include <vector>
#include <cmath>
#include "gcd.h"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	cout << "НОД для чисел " << a << " и " << b << " = " << gcd_1(a, b) << " (через итеративный алгоритм)" << endl;
	cout << "НОД для чисел " << a << " и " << b << " = " << gcd_2(a, b) << " (через рекурсивный алгоритм)" << endl;
} 