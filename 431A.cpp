#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int, int> box;
	cin >> box[1];
	cin >> box[2];
	cin >> box[3];
	cin >> box[4];
	string s;
	cin >> s;
	int sum = 0;

	for (int i = 0; i < s.length(); i++)
	{
		sum += box[s[i] - 48];

	}
	cout << sum;

	return 0;
}