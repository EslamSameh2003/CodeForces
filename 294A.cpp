#include<iostream>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

	}

	int x;
	cin >> x;

	for (int i = 0; i < x; i++)
	{
		int p, k;
		cin >> p >> k;
		--p;

		if (p!=0)
		{
			arr[p - 1] += k - 1;
		}
		if (p!=n-1)
		{
			arr[p + 1] += arr[p] - k;

		}
		arr[p] = 0;

	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}



}