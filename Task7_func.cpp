#include <iostream>
#include <iomanip> 
using namespace std;

double x, result;

void f() {
	result = (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));
}