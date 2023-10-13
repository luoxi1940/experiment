#include <iostream>
#include <cmath>
using namespace std;
int fac(int n)
{
	if (n == 0 || n == 1) return 0;
	else return n * fac(n - 1);
}
int main()
{
	int x, i, n, m = 1;
	float y = 0.0, t;
	cin >> n >> x;
	for (i = 1; i < n; i++)
	{
		for (int j = 1; j <= 2 * i - 1; j += 2)
		{
			m = m * x;
		}
		t = m / fac(2 * i - 1);
		if (i % 2 == 0)
		{
			y = y - t;
		}
		else y = y + t;
	}
	cout << y << endl;


	system("pause");
	return 0;
}