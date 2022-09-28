#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	
	int arr[1000],x,ma=0,mn=101,poma=0,pomn=0;
	cin >> x;
	for (int  i = 1; i <= x; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= x; i++)
	{
		ma = max(arr[i], ma);
		if (ma)
		{
			poma = i;
		}
		mn = min(arr[i],mn);
		if (mn)
		{
			pomn = i;
		}

	}
	if (poma > pomn)
	{
		cout << (poma - 1) + (x - ++pomn);

	}
	else
	{
		cout << (poma - 1) + (x - pomn);
	}
	
	
	/*
	int size,maxpo=0,minpo=0,min=101,max=0;
	cin >> size;
	for (int i = 1; i <= size; i++)
	{
		int num;
		cin >> num;

		if (num > max)
		{
			max = num;
			maxpo = i;
		}
		if (num <= min)
		{
			min = num;
			minpo = i;
		}

	}
	if (maxpo > minpo)
	{
		cout << (maxpo - 1) + (size - ++minpo);

	}
	else
	{
		cout << (maxpo - 1) + (size - minpo);
	}
	*/

	return 0;
}
