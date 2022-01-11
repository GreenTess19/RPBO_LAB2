#include <iostream>
#include <iomanip> 
using namespace std;

double f(double);

int main()
{
	double x = 10;
	cout << "x = " << x << endl;
	cout << "f = " << setprecision(4) << f(x) << endl;

	cout << "x = ";
	cin >> x;
	cout << "f = " << setprecision(4) << f(x) << endl;
}

double f(double x) {
	return (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));
}

