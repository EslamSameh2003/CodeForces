#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	long long n, x = 0;
	cin >> n;
	if (n % 2 == 0)
	{
		cout<<n / 2;
	}
	else
	{
		cout<<((n / 2)+1)*-1;
	}
	return 0;
}
