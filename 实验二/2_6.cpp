#include <iostream>
using namespace std;
int fac(int n)
{
	if (n == 0 || n == 1) return 1;
	else return n * fac(n - 1);
}
int main()
{
	int i, j, m = 1, s = 0;
	for (i = 1; i <= 7; ++i)
	{
		s = s + fac(i);
	}
	cout << s << endl;


	system("pause");
	return 0;
}