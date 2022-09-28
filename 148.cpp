#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	int x1, x2, x3, x4,x5,c=0;

	cin >> x1 >> x2 >> x3 >> x4 >> x5;

	for (int i = 1; i <= x5; i++)
	{
		if (i % x1==0|| i % x2 == 0 || i % x3 == 0 || i % x4 == 0  )
		{
			c++;

		}

	}
	cout << c;
	return 0;
}