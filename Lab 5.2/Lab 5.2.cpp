// Лабораторна робота № 5.2
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double S(const double x, const double eps, int& n);
double A(const double x, const int n, double a);

int main()
{
    double xp, xk, x, dx, eps, s = 0;
    int n = 0;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;
    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(16) << "arcth(x)" << " |"
        << setw(7) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;
    x = xp;

    s = 0;

    while (x <= xk)
    {
         ;
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(16) << setprecision(5) << exp(x) << " |"
            << setw(10) << setprecision(5) << s << " |"
            << setw(5) << n << " |"
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;
    return 0;
}


double S(const double x, const double eps, int& n)
{
    n = 0; // вираз залежить від умови завдання варіанту
    double a = 1 / x; // вираз залежить від умови завдання варіанту
    double s = a;
    do
    {
        n++;
        a = A(x, n, a);
        s += a;
    } while (s += a);
    return s;
}

//рекурентне обч наступного доданку
double A(const double x, const int n, double a)
{
    a /= x * x * (2 * n + 1) / (2 * n - 1); // домножуємо;
    return a;
}