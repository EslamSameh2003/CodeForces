#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	long long x, y, z;
	cin >> x >> y >> z;

	long long width = x/z;
	if (x % z > 0)
	{
		width++;
	}
	long long height = y / z;
	if (y % z > 0)
	{
		height++;

		
	}
	cout << width*height << endl;

	return 0;
}