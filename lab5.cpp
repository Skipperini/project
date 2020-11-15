// lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "windows.h"
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, k, b, c;
	double f;
	cout << "¬вед≥ть x: ";
	cin >> x;
	cout << "¬вед≥ть k: ";
	cin >> k;
	cout << "¬вед≥ть b: ";
	cin >> b;
	cout << "¬вед≥ть c: ";
	cin >> c;

	if ((x + c) < 0 && k != 0) { f = -k * pow(x, 3) - b; }
	if ((x + c) > 0 && k == 0) { f = (x - k) / (x - c); }
	else { f = (x / c) + (c / x); }
	cout << "–езультат обчислень:" << endl;
	cout << "F=" << f << endl;
	system("pause");
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
