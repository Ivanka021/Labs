#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

const int z = 10;
int M[z];
int K[z];

void input(int[]);
void output(int[]);
int t(int[], int[]);
int Min(int[]);
int Max(int[]);
void remin(int[], int, int);
void remax(int[], int, int);

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	input(M);
	input(K);
	cout << "M: ";
	output(M);
	cout << "\n\n";
	cout << "K: ";
	output(K);
	cout << "\n\n";
	int T = t(M, K);
	cout << "Обчислення суми добутку елементiв з однаковим iндексом t = " << T << "\n\n";
	remin(K, Min(K), T);
	remax(M, Max(M), T);
	cout << "Вигляд масиву K пiсля замiни елементiв: ";
	output(K);
	cout << "\n\n";
	cout << "Вигляд масиву M пiсля замiни елементiв: ";
	output(M);
	cout << "\n\n";
	return 0;
}

void input(int arrey[])
{
	for (int i = 0; i < z; i++)
	{
		arrey[i] = rand() % 17 - 8;
	}
}

void output(int arrey[])
{
	for (int i = 0; i < z; i++)
	{
		cout << " " << arrey[i];
	}
}

int t(int arrey_M[], int arrey_K[]) 
{
	int sum = 0;
	for (int i = 0; i < z; i++) 
	{
		sum = sum + (arrey_M[i]) * (arrey_K[i]);
	}
	return sum;
}

int Min(int arrey[]) 
{
	int mini = arrey[0];
	for (int i = 1; i <= z; i++) 
	{
		if (mini >= arrey[i]) 
		{
			mini = arrey[i];
		}
	}
	return mini;
}

int Max(int arrey[])
{
	int maxi = arrey[0];
	for (int i = 0; i < z; i++) 
	{
		if (maxi <= arrey[i]) 
		{
			maxi = arrey[i];
		}
	}
	return maxi;
}

void remin(int arrey[], int mi, int re)
{
	for (int i = 0; i < z; i++) 
	{
		if (arrey[i] == mi)
		{
			arrey[i] = re;
		}
	}
}



void remax(int arrey[], int ma, int re)
{
	for (int i = 0; i < z; i++) 
	{
		if (arrey[i] == ma)
		{
			arrey[i] = re;
		}
	}
}