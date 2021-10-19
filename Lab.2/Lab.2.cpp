#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	cin >> y;
	if (y >= -x && y <= 1 && x <= 0 && x >= -sqrt(2) / 2)
	{
		setlocale(LC_ALL, "Russian");
		cout << "Точка принадлежит заштрихованной фигуре";
	}
	else if(y >= x && y <= 1 && x >= 0 && x <= sqrt(2) / 2)
	{
		setlocale(LC_ALL, "Russian");
		cout << "Точка принадлежит заштрихованной фигуре";
	}
	else
	{
		setlocale(LC_ALL, "Russian");
		cout << "Точка не принадлежит заштрихованной фигуре";
	}
}