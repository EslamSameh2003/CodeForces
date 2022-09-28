#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	int x,n;
	cin >> x >> n;
	for (int i = 0; i < n; i++)
	{
		if (x % 10 == 0)
		{
			x /= 10;
			continue;
		}
		else
		{
			x--;
		}
		
		

	}

	cout << x << endl;

	return 0;
}
