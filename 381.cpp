#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n=0;
    cin >> n;
    int *x = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];

    }
    int s = 0, e = n - 1, m = 0, p1 = 0, r1 = 0, r2 = 0;

    for (int i = 0; i < n; i++)
    {
       
        if (x[s] > x[e])
        {
            m = x[s];
            s++;
        }
        else
        {
            m = x[e];
            e--;
        }
        if (p1 % 2 == 0)
        {
            r1 += m;
        }
        else
        {
            r2 += m;
        }
        p1++;
    }
    cout << r1 << " " << r2;

    return 0;

}