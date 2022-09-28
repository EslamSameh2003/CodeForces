#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, z=1, x ;
	cin >> x;
	while (x--)
	{
		cin >> a >> b;

		if (a%b==0)
		{
			cout << 0 << endl;
		}
		else
		{
			z = a % b;
			
			cout << b - z << endl;

		}

	}



	return 0;
}
