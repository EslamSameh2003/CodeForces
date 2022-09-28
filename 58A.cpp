#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	string s ,h="hello";
	cin >> s;
	int p=0;
	for (int i = 0; i < s.length(); i++)
	{
		if (p < h.length() && s[i] == h[p])
			p++;
	}

	if (h.length() == p)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}



	return 0;
}
