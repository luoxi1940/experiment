#include<iostream>
using namespace std;
int fun(int x)
{
	if (x == 0)return 1;
	else if (x == 1) return 2 ;
	else return 2 * fun(x - 1) - 2 * (x - 1) * fun(x - 2);
}
int main()
{
	int x;
	cin >> x;
	cout << "H=" << fun(x) << endl;
	return 0;
}