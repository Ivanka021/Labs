#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b;
    bool prime;
    cout << "Введите а: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    for (a; a <= b; a++)
    {
        prime = true;
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                prime = false;
                break;
                cout << a << " ";
            }
        }
        if (prime == true)
        {
            cout << a << " ";
        }
    }
    system("pause");
    return 0;
}
