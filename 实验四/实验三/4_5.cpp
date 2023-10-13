#include <iostream>
#include <cmath>
using namespace std;
void fun1(int a, int b, int c)
{
	double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << "根为" << x1 << "," << x2 << endl;
}
void fun2(int a, int b, int c)
{
	double x = -b / (2 * a);
	cout << "根为" << x << endl;
}
void fun3()
{
	cout << "没有根" << endl;
}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	double t= b * b - 4  *a * c;
	if (t > 0) fun1(a, b, c);
	else if (t == 0) fun2(a, b, c);
	else fun3();
	return 0;
}