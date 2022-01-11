#include <iostream>
#include <iomanip> 
using namespace std;
double x, result;
void f();

int main()
{
	x = 10;
	cout << "x = " << x << endl;
	f();
	cout << "f = " << setprecision(4) << result << endl;
	cout << "x = ";
	cin >> x;
	f();
	cout << "f = " << setprecision(4) << result << endl;
}

void f() {
	result = (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));
}