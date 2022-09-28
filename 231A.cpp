#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	
	int x,y,z, n,f=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y >> z;
		if ((x + y + z) >= 2)
		{
			f++;

		}

		
	}
	cout << f << endl;

	return 0;
}