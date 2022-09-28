#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[] = { 4,7,44,77,47,74,444,777,474,747,447,774,744,477 };
	long long x;
	cin >> x;
	long long count = 0;
	for (int i = 0; i <14 ; i++)
	{
		if (x % arr[i]==0)
		{
			count=1;
			break;
		}

	}
	if (count == 1 )
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}