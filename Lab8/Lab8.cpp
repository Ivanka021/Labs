#include <iomanip>
#include <ctime>
#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

double absA, absB, absC;
double a, b, c;
void inputMatrix(double** K, int n);
void outputMatrix(double** K, int n);
void outputResult(double** K, int k, int n);
void deleteMatrix(double** K, int n);

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введiть розмiрнiсть квадратних матриць: ";
    cin >> n;
    cout << "\n\n";
    cout << "Матрицi: " << "\n\n";
    cout << "A: " << "\n";
    double** A = new double* [n];
    inputMatrix(A, n);
    outputMatrix(A, n);
    cout << "B: " << "\n";
    double** B = new double* [n];
    inputMatrix(B, n);
    outputMatrix(B, n);
    cout << "C: " << "\n";
    double** C = new double* [n];
    inputMatrix(C, n);
    outputMatrix(C, n);

    for (int i = 0; i < n; i++) {

        absA = 0;
        absB = 0;
        absC = 0;

        for (int j = 0; j < n; j++) {
            if (absA <= abs(A[i][j])) {
                absA = abs(A[i][j]);
            }
            if (absB <= abs(B[i][j])) {
                absB = abs(B[i][j]);
            }
            if (abs(absC) <= abs(C[i][j])) {
                absC = abs(C[i][j]);
            }
        }


        a += absA;
        b += absB;
        c += absC;


        if (i == 0)
        {
            cout << "мод.макс.ел. A:    мод.макс.ел. B:     мод.макс.ел. C:   " << "\n";
        }
        cout << absA << setw(19) << absB << setw(20) << absC << "\n";


        if (i == n - 1)
        {
            cout << "\n\n";
            cout << "сум.макс.ел.рядкiв М: " << (-1 * a) << "\n";
            cout << "сум.макс.ел.рядкiв N: " << (-1 * b) << "\n";
            cout << "сум.макс.ел.рядкiв B: " << (-1 * c) << "\n\n\n" << "Результат: ";
            cout << "\n\n";
        }


        if (i == n - 1)
        {

            double  min = (-1 * a);

            if ((-1 * b) < (-1 * a) && (-1 * b) < (-1 * c))
            {
                outputResult(B, b, n);
            }

            if ((-1 * c) < (-1 * a) && (-1 * c) < (-1 * b))
            {
                outputResult(C, c, n);
            }

            if ((-1 * a) < (-1 * c) && (-1 * a) < (-1 * b))
            {
                outputResult(A, a, n);
            }
            cout << "\n\n";
        }
    }
    deleteMatrix(A, n);
    deleteMatrix(B, n);
    deleteMatrix(C, n);
}

void inputMatrix(double** K, int n)
{
    for (int i = 0; i < n; i++) {

        K[i] = new double[n];
    }
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            K[i][j] = double(rand() % 10000 * -0.001);
        }
    }
}

void outputMatrix(double** K, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << K[i][j] << setw(10);
        }
        cout << "\n\n";
    }
}

void outputResult(double** K, int k, int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                K[i][j] = (-1 * k);
            }
            cout << setw(10) << K[i][j];
        }
        cout << "\n\n";
    }
}

void deleteMatrix(double** K, int n)
{
    for (int i = 0; i < n; i++) {

        delete[] K[i];
    }
}