#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	string s1,s2,s3;
	cin >> s1>>s2;
	int k = s1.length();
	reverse(s1.begin(), s1.end());
	if (s1 == s2)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

/*
	for (int i = k; i >= 0; i--)
	{
		
		
		for (int j= 0; i < k; i++)
		if (s1[i] == s2[j])
		{
			cout << "YES";
			return 0;
		}
		else
		{
			cout << "NO";
			return 0;
		}
		
	}
	
	*/

	return 0;
}