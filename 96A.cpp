#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{

	string s;
	cin >> s;
	long long count=0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i + 1] == s[i])
		{
			count++;
		}
		if (count >= 6)
		{
			cout << "YES\n";
			return 0;
		}
		if (s[i + 1] != s[i])
		{
			count = 0;
		}

	}
	cout << "NO\n";


	return 0;
}
