#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	int n,x=0;
	cin >> n;
	string s;

	for (int i = 0; i < n; i++)
	{
		cin >> s;

		if (s == "Dodecahedron")
		{
			x += 12;


		}
		if (s == "Tetrahedron")
		{
			x += 4;


		}
		if (s == "Octahedron")
		{
			x += 8;


		}
		if (s == "Cube")
		{
			x += 6;


		}
		if (s == "Icosahedron")
		{
			x += 20;


		}

	}
	cout << x;

	return 0;
}