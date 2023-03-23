#include<iostream>
using namespace std;

int main() 
{
	// nc = num of crime     np = num of policeman
	int n,nc=0,np=0;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] ==-1 )
		{
			if (np > 0)
			{
				np--;
			}
			else
			{
				nc++;
			}


		}
		else 
		{
			np +=arr[i];
		}


	}

	cout << nc;

	return 0;
}