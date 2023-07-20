#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Y, W;
    cin >> Y >> W;
    string prob[7] = { "", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6" };
    int n = max(Y, W);
    cout << prob[n] << endl;
    return 0;
}