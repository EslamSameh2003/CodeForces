#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{

	long arr[100000],x1=0,x2=0,x3=0,x4=0;
	int n,min=0;
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		if (arr[i]==1)
		{
			x1++;
		}
		if (arr[i] == 2)
		{
			x2++;
		}
		if (arr[i] == 3)
		{
			x3++;
		}
		if (arr[i] == 4)
		{
			x4++;
		}
	

	}
	
	min = x4;

	while(x1 != 0 && x3 != 0)
	{
		x3 = x3 - 1;
		x1 = x1 - 1;
		min = min + 1;
	}

	if (x1==0 && x3!=0)
	{
		min = min + x3;
		x3 = 0;
	}

	min = min + x2 / 2;

	if (x2 % 2 != 0)
	{
		if (x1 <= 2)
		{
			min = min + 1;
			x2 = 0;
			x1 = 0;
		}
		else
		{
			x1 = x1 - 2;
			min = min + 1;
			x2 = 0;	
		}
	}

	if (x1 != 0)
	{
		min = min + x1 / 4;

		if (x1 % 4 != 0)
		{
			min = min + 1;
		}


	}
	cout << min;



	return 0;
}
