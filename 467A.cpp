#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	int n, a, b;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (b - a >= 2)
		{
			count++;
		}


	}
	cout << count;

	return 0;
}
