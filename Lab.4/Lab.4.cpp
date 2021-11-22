#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double x = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        x = x + (1. / (i * (i + 2)));
    }
    cout << x;
}