#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	
	int m, b,c=0;
	cin >> m >> b;
	
	
	if (m > b )
	{
		c = 0;
	}
	else
	{

		while (m <= b)
		{
			m = m * 3;
			b = b * 2;
			c++;
		}
	}
	cout << c << endl;

	return 0;
}
