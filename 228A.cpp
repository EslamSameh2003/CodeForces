#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	long long s[200];
	long long count = 0;

	for (int i = 0; i <4; i++)
	{
		cin >> s[i];
		
	}
	sort(s, s + 4);
	for (int i = 0; i < 4; i++)
	{
		if (s[i] == s[i + 1])
		{
			count++;
		}

	}

	cout << count;

	return 0;
}
