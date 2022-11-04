#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	int st, pu;
	long long res ;
	cin >> st>>pu;
	int arr[1000];
	for (int i = 0; i < pu; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + pu);
	
	res = arr[st - 1] - arr[0];
	for (int i = 1; i <= pu - st; i++)
	{
		if (arr[i + st - 1] - arr[i] < res)
		{
			res = arr[i + st - 1] - arr[i];
		}
	}

	cout << res;





	return 0;
}
