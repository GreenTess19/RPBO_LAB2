#include "kiseleva.h"

int main()
{
	cout << "x = " << x << endl;
	Kiseleva::f();
	cout << "f = " << setprecision(4) << result << endl;

	cout << "x = ";
	cin >> x;
	Kiseleva::f();
	cout << "f = " << setprecision(4) << result << endl;
}
