#include<iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int sum=0,res=0,start=97;
	for (int i = 0; i <s.length(); i++)
	{
		res = abs(s[i] - start);
		if (res <= 13)
		{
			sum += res;
		}
		else{
			sum += (26 - res);

		
		}
		start = s[i];

	}
	cout << sum;

	return 0;
}