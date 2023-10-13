#include <iostream>

using namespace std;
int main()
{
	int m, n, k;
	m = 1000;
	n = 45;
	cout << "\n(" << m << ':' << n << ')';
	k = 0;
	while (m >= n)
	{
		m -= n;
		k += 1;
	}
	cout << k << "---" << m << endl;

	system("pause");
	return 0;

}