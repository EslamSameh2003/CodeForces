#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	/*
	long long arr[100][100], n;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
    	{

		   cin >> arr[i][j];

	     	sum += arr[i][j];


    	}

	if (sum == 0)
	{
		cout << "YES\n";

	}
	else
	{
		cout << "NO\n";
	}
	*/

	int x, y, z,n;
	int sumx = 0, sumz = 0, sumy = 0;
	cin >> n;
	while (n)
	{
		cin >> x >> y >> z;

		sumx += x;
		sumy += y;
		sumz += z;

		n--;
	}
	if (sumx == 0 && sumy == 0 && sumz == 0)
	{
		cout << "YES\n";
	}
	else{cout << "NO\n";}
	

	return 0;
}
