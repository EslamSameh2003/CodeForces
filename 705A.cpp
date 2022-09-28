#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{ 
	int x;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		if (i % 2 == 0)
		{
			cout << "I hate ";
		}
		else
		{
			cout << "I love ";
		}
		if (i != x - 1)
		{
			cout<< "that ";
		}
		else
		{
			cout<< "it ";
		}


	}



	return 0;
}
