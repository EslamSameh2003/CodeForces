#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	long long arr[1000],t,n,sum=0;
	cin >> n >> t;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		if (arr[i] > t)
		{
			arr[i] = 2;
			sum+=arr[i];
		}
		else
		{
			arr[i] = 1;
			sum += arr[i];
		}


	}

	cout << sum;

	return 0;
}
