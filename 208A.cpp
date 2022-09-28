#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	string s, s1; int n = 0;
	cin >> s;
	/*
	for (int i = 0; i < s.length(); i++)
	{

		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
		{
			i += 2;
			if (n)
			{
				cout << " ";
			}
		}
		
		else
		{
			n = 1;
			cout << s[i] ;
		}
	}
	*/

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] =='W' && s[i+1] == 'U' && s[i+2] == 'B')
		{
			i += 2;
		
			continue;
	    	if(n)
		    {
			 cout << " ";
		    }
		}
		n = 1;
		cout << s[i];
	}






	return 0;
}