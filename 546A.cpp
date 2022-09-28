#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	long long p, d, n, sum=0;
	cin >> p >> d >> n;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + (i * p);
	}
	if (sum > d)
	{

		cout << sum - d;
		
	}
	else
	{
		cout << "0";
	}
	

	return 0;
}
