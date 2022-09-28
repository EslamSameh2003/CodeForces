#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	long long p, n;
	cin >> n >> p;
	if ((n+1)/2>=p )
	{
		cout << p*2-1;
	}
	else
	{
		cout <<(p - (n+1)/2)*2;
	}

	return 0;
}
