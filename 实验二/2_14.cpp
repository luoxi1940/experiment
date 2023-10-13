#include<iostream>
using namespace std;
int main()
{
	int arr[12] = { 1,20,30,12,3,5,7,4,6,100,11,8 };
	int t = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i<=t; i++)
	{
		if ((arr[i-1] > arr[i ]&&arr[i]<arr[i+1]) || i == 0)
		{
			cout << "(" << arr[i];
			for (int j = i; arr[j] < arr[j + 1]; j++)
				cout << "," << arr[j + 1];
			cout << ")" << endl;
		}
		if ((arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) )
		{
			cout << "(" << arr[i];
			for (int j = i; arr[j] > arr[j + 1]; j++)
			{
				if (j != t - 1)
					cout << "," << arr[j + 1];
				else break;
			}
			cout << ")" << endl;
		}
	}
	system("pause");
	return 0;
}