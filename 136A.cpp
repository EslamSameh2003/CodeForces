#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	// frequency array   بتخلي الفاليو هو الانديكس وبتخلي الاندبكس هو الفاليو ف الاراي//

	int n;
	cin >> n;
	int arr[1000];
	
	for (int  i = 1; i <= n; i++)
	{
		int c;
		cin >> c;
		arr[c] = i;

	}
	for (int i = 1; i <= n; i++)
	{
		cout << arr[i] << endl ;


	}

	return 0;
}
