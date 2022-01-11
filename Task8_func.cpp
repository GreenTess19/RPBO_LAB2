#include <iostream>
#include "func.h"
using namespace std;

double x = 10;
double result = 0;
void f() {
	result = (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));
}