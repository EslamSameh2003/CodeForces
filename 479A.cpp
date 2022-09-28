#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	long long ans=0, x=0, y=0, z=0;

	
	cin >> x >> y >>z ;
	ans = x + y + z;
	ans = max(ans, (x * y * z));
	ans = max(ans, (x + y) * z);
	ans = max(ans, x * (y + z));
	ans = max(ans, x + (y * z));
	ans = max(ans, (x * y) + z);
	cout << ans;



	return 0;
}

