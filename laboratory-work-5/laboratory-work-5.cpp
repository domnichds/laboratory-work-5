#include <iostream>
#include <vector>
#include <cmath>
#include "gcd.h"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;
	cout << "��� ��� ����� " << a << " � " << b << " = " << gcd_1(a, b) << " (����� ����������� ��������)" << endl;
	cout << "��� ��� ����� " << a << " � " << b << " = " << gcd_2(a, b) << " (����� ����������� ��������)" << endl;
} 