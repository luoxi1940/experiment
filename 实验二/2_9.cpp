#include <iostream>
#include <cmath>
using namespace std;
const double TINY_VALUE = 1e-6;
double test(double x) {
	double g = 0;
	double t = x;
	int n = 1;
	do {
		g += t;
		n++;
		t = -t * x * x / (2 * n - 1) / (2 * n - 2);
	} while (fabs(t) >= TINY_VALUE);
	return g;
}
int main()
{
	double x;
	cout << "����x" << endl;
	cin >> x;
	cout << "Y=" << test(x) << endl;
	system("pause");
	return 0;
}