#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	int n,x=0;
	int arr[5] = { 100,20,10,5,1};
	cin >> n;
	
	for (int  i = 0; i < 5; i++)
	{
	 
		x += n / arr[i];
		n =n% arr[i];

	}
	cout << x;




	return 0;
}