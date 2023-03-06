#include<iostream>
using namespace std;

int main()
{
	int n,x;
	int *arr =&x;
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> *arr;
		cout << (*arr - 1) / 2 << endl;

	}
	/*
	for (int i = 0; i < n; i++)
	{
		cout << (*arr - 1) / 2 << endl;
	}
	*/



	/*
	* int t;
	 cin >> t;
	 while (t--)
	 {
		int n;
		cin >> n;
		cout << (n - 1) / 2 << endl;
	 }
	 
	*/







	return 0;
}