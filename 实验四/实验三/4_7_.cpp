#include<iostream>
using namespace std;
void tran(int n)
{
	int t;
	if (n > 10)
	{
		tran(n / 16);
	}
	t = n % 16;
	if (t >= 10)cout << char('A' + t - 10);
	else cout << t;
}
int main()
{
	int n;
	cout << "输入一个十进制数" << endl;
	cin >> n;
	tran(n);
	cout << '\n';
	return 0;
}