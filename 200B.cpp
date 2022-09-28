#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	double x, arr[1000], s = 0;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < x; i++)
	{
		arr[i] = arr[i] / 100;
		s += arr[i];
	}

	cout << (s/x ) * 100;

	return 0;
}
