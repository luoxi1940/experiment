#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, j, r;
	for (i = 1; i <= 21; i += 2)
	{
		for (j = 1; j <= 21 - i; j += 2)
			cout << "    ";
		for (j = 1; j < i; j += 2)
			cout << setw(4) << j;
		for (r = i; r >= 1; r -= 2)
			cout << setw(4) << r;
		cout << endl;
	}
	system("pause");
	return 0;
}