#include "kiseleva.h"
using namespace std;

double x = 10;
double result = 0;

namespace kiseleva {
	void f() {
		result = (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));
	}
}
