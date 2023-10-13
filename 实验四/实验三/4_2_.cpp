#include <iostream>
using namespace std;
long fig(int g)
{
	switch (g)
	{
	case0:return 0;
	case1:
	case2:return 1;
		
	}
	return(fig(g - 1) + fig(g - 2));
}
void main()
{
	long k;
	k = fig(4);
	cout << "k=" << k << endl;
	

}