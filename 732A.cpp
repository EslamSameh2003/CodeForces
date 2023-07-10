#include<iostream>
#include<string>

using namespace std;

int main()
{
	int p, c, res=0, count=1 ;
	cin >> p >> c;
 

	while (true)
	{
		res = p * count;
		if (res % 10==c || res % 10 == 0)
		{
			
			break;

		}
		++count;
	}
	cout << count;

	 return 0;
}
