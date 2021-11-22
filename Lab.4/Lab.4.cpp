#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n;
    double x = 0;
    cin >> n;
    for (double i = 1; i <= n; i++)
    {
        x = x + (1. / (i * (i + 2)));
    }
    cout << x;
}