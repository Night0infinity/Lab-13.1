//////////////////////////////////////////////////////////////////////////////
// Lab_13_1.cpp
// головний файл проекту – функція main
#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> e;
	cout << endl;
	const double PI = 4 * atan(1);
	x = x_p;
	while (x <= x_k) {
		sum(); // виклик процедури обчислення суми
		cout << x << "    "
			<< PI/2 + s << "    "
			<< atan(x) << "    "
			<< n << endl; // тут слід використовувати форматний вивід
		x += dx;
	}
	cin.get();
	return 0;
}
