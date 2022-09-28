#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int x=0;
	int p;
	cin >> p;
	int s;
	cin >> s;
	int arr[1000];
	
	for (int i = 1; i <= p; i++)
	{
		cin >> arr[i];


	}

	for (int i = 1; i <= p; i++)
	{
		if (arr[i] >= arr[s] && arr[i] > 0)
		{
			x++;
		}
		
	}
	cout << x << endl;
	



	return 0;
}