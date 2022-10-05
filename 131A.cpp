#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	/*
	string s;
	cin >> s;

	int c = 0, d = 0;

	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
		s[0] = toupper(s[0]);


	}
	cout << s;
	*/

    string s;
    char u;
    bool c = true;
    cin >> s;

    for (int i = 1; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            c = false;
        }
    }

    if (c == true)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (islower(s[j]))
                u = toupper(s[j]);
            else
                u = tolower(s[j]);
            cout << u;
        }
    }
    else
        cout << s;

	return 0;
} 
