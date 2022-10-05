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
	int x,count=0;
	cin >> x;
	cin >> s;

	if (x<26)
	{
		cout << "NO";
		return 0;
	}

	for (int i = 0; i < x; i++)
	{
		s[i] = tolower(s[i]);


	}
	sort(s.begin(), s.end());

	for (int i = 0; i < x; i++)
	{
		if (s[i] != s[i + 1]) {


			count++;
		}
	}
	if (count == 26)
	{
		cout << " YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}
