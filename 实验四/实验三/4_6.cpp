#include<iostream>
#include <string>
using namespace std;
int hex_to_dec(string hex)
{
	int dec = 0;
	int base = 1;
	int len = hex.length();
	for (int i = len - 1; i >= 0; i--)
	{
		if (hex[i] >= '0' && hex[i] <= '9')
			dec += (hex[i] - '0') * base;
		else if (hex[i] >= 'a' && hex[i] <= 'f')
			dec += (hex[i] - 'a' + 10) * base;
		else if (hex[i] >= 'A' && hex[i] <= 'F')
			dec += (hex[i] - 'A' + 10) * base;
		base *= 16;
	}
	return dec;
}
int main()
{
	string hex;
	cout << "输入一个十六进制数" << endl;
	cin >> hex;
	cout << "十进制为：" << hex_to_dec(hex) << endl;
	return 0;

}