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
	long long n;
	cin >>n>> s;
	long long count1 = 0,count2=0;

	for (int i = 0; i < n; i++)
	{
		if (s[i] =='A')
		{
			count1++;	
		}
		else if (s[i] == 'D')
		{
			count2++;
		}
		
	}

		if (count1<count2 )
		{
			cout << "Danik";
		}
		else if (count1 > count2)
		{
			cout << "Anton";
		}
		else
		{
			cout << "Friendship";
		}

	
	return 0;
}
