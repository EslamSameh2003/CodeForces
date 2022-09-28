#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	int a, b,sum=0,x=0,n;
	cin >> n;

	while (n>0)
	{
		cin >> a >> b;
		sum = (a + x) - b;

		if (sum < 0)
		{
			x = 0;
		}
		else
		{
			x = sum;
		}
		n--;
	}
	cout << sum << endl;


	return 0;
}
