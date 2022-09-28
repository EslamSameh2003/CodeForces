#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	long long arr[1000];
	int n;
	cin >> n;
	int count1 = 0,count2=0;
	for (int  i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 1)
		{
			count1++;
			cout << "HARD";
			return 0;
		}
		else if(arr[i]==0)
		{
			count2++;
		}



	}
	if (count1 > count2)
	{
		cout << "HARD";
	}
	else
	{
		cout << "EASY";
	}

	return 0;
}
