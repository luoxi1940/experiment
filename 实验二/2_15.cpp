#include <iostream>
#include<cmath>
using namespace std;

int main()
	{
	unsigned long long r = pow(12, 100);
	r = r % 1000;
	cout << r / 100 << r / 10 % 10 << r % 10;
	return 0;
	}
