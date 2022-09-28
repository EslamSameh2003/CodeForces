#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	long long x;
	cin >> x;
	long long count = 0;
	while (x)
	{
		if (x % 10 == 7 || x % 10 == 4)
		{
			count++;
		}
		x /= 10;
	}
	if (count == 7 || count == 4)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}
