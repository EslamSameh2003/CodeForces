#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	int arr1[1000], arr2[1000],x,count=0;
	cin >> x;

	for (int i = 0; i <x; i++)
	{
		cin >> arr1[i]>>arr2[i];

	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{

			if (arr1[i]==arr2[j])
			{
				count++;
			}


		}


	}
	cout << count;

	return 0;
}

