#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
	int x,n=0,inde,indo;
	int arr[1000];
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];

	}
	for (int i = 0; i < x; i++)
	{
		
		if(arr[i]%2==0)
		{ 
			n++;
			inde = i + 1;
		}
		
		else
		{
			
			indo = i + 1;
		}
		
	}

	if (n == x - 1)
	{
		cout << indo;
	}
	else
	{
		cout << inde;
	}



	return 0;
}