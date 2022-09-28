#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	int x, count = 0, k = 1;
	long long arr[100000];
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];

		if (arr[i] >= arr[i - 1])
		{
			count++;
			k = max(k, count);
		}
		else
		{
			count = 1;
		}

	}

	cout << k;



	return 0;
}

