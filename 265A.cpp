#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	int count=0;
	cin >> s1 >> s2;

	for (int  i = 0; i < s2.length(); i++)
	{
		if (s2[i] == s1[count])
		{
			count++;
		}
	}

	cout << ++count;

	return 0;
}