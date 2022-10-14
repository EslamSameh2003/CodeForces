#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	int sum = 0;
    string s;
	getline(cin, s);

	sort(s.begin(), s.end());
	
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == s[i + 1])
		{
			continue;
		}
		else
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				sum++;
				
		    }
		}
	}
	cout << sum;
    return 0;
}
