#include <iostream>
using namespace std;
int main()
{
    int x, m=0, h=0, a;
    cin >> x;
    a = x * 2;
    h = a / 60;
    m = a % 60;
    cout << h << " hours " << m << " minutes" << endl;
}

