#include <iostream>
#include <iomanip> 
using namespace std;


int main()
{
	double x = 10;

	double f = (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));
	cout << "x = " << x << endl;
	cout << "f = " << setprecision(4) << f << endl;

	cout << "x = ";
	cin >> x;
	f = (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));
	cout << "f = " << setprecision(4) << f << endl;

}