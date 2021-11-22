#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

double function(double a, double b, double c)
{
    return (2 * a - b - sin(c)) / (5 + abs(c));
}

int main()
{
    setlocale(LC_ALL, "rus");
    double s, t, L;
    cout << "Введите s: ";
    cin >> s;
    cout << "Введите t: ";
    cin >> t;
    L = function(t, -2 * s, 1.17) + function(2.2, t, s - t);
    cout << L;
    return 0;
}