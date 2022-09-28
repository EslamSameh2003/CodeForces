#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	int x, y=0;
	string s;
	cin >> x>>s;

	for (int i = 0; i < x; i++)
	{
		if (s[i] == s[i + 1])
		{
			y++;
		}
	}
	cout << y;

	return 0;
}
