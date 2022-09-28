#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	long x, y;
	cin >> x >> y;
	long v;
	v = x * y;
	if (v % 2 == 0)
	{
		cout << v / 2 << endl;
	}
	else
	{
		v--;
		cout << v / 2 << endl;

	}



	return 0;
}