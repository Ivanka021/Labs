#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "rus");
    int a, b;  
    int d = 2;
    cout << "Введите а: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    for (int i = a; i < b; i++);
    {
        if (a % d != 0) 
            {
                cout << a << " ";
            }
        }
    }
