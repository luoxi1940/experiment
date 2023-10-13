#include <iostream>
using namespace std;

int main()
{
	int i, s = 0;
	for (i = 1; i <= 39; i += 2)
	{
		s = s + i * (i + 1);

	}
	cout << s << endl;


	system("pause");
	return 0;

}