// 4.01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
struct phone
{
	int countryCode;
	short operatorCode;
	unsigned int number;
};

int main()
{
	phone ph1, ph2;
	ph1.countryCode = 380;
	ph1.operatorCode = 98;
	ph1.number = 1234567;
	cout << "input phone";
	cin >> ph2.countryCode >> ph2.operatorCode >> ph2.number;
	cout << ph1.countryCode << ph1.operatorCode << ph1.number << endl;
	cout << ph2.countryCode << ph2.operatorCode << ph2.number << endl;
	system("pause");
    return 0;
}

