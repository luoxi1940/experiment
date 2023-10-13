#include<iostream>
using namespace std;
bool suu(int n)
{
	int j = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) j++;
	}
	if (j == 2)return true;
	else return false;
}
int main()
{
	int m,i,j,h;
	for (m = 0; m <= 2000; m++)
	{
		h = 0;
		if (suu(m)==1)
		{
			for (i = 1;; i++)
			{
				if (suu(m + i) == 0 && m + i <= 2000)
					h++;
				else break;
			}
			m = m + i;
			if (h >= 9)
			{
				for (j = i - 1; j >= -1; j--)
					cout << m - j << "  ";
				cout << '\n';
			}
		}
	}
	
	return 0;
}