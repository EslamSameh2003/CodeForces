#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>
#include <stdio.h>
#include <tuple>


using namespace std;

int main()
{
	string s,s2;
	cin >> s;



	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A' || s[i] == 'O' || s[i] == 'I' || s[i] == 'E' || s[i] == 'U' || s[i] == 'Y')
		{
			continue;
		}

		else if(s[i] == 'a' || s[i] == 'o' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u' || s[i] == 'y')
		{
			continue;

		}
		else
		{
			
			s2 += '.';
			s2 += tolower(s[i]);
			

		}
	}
	cout << s2;

	return 0;
}