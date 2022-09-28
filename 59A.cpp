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
	int sm= 0,ca=0;
	for (int i = 0; i < s.length(); i++)
	{
	 
		if (s[i] >= 97 && s[i] <= 122)
		{
			sm++;

		}
		else
		{
			ca++;
		}

	}
	char res;
	if(ca>sm)
		for (int i = 0; i < s.length(); i++)
		{
			res = toupper(s[i]);
			cout << res;
		}
	else
	{
		for (int i = 0; i < s.length(); i++)
		{
			res = tolower(s[i]);
			cout << res;
		}

	}

	return 0;
}
