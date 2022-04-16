/*
Rico Sumantri - 2100018439
Ananda Firdaus - 2100018452
*/

#include <iostream>
using namespace std;
class Fibonacci
{

public:
    int a, b, c;
    void iteratif(int);
    int rekursif(int);
};

void Fibonacci::iteratif(int n)
{
    a = 0;
    b = 1;

    cout << a << " " << b;
    for (int i = 1; i <= n - 2; i++)
    {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
}

int Fibonacci::rekursif(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return rekursif(n - 1) + rekursif(n - 2);
    }
}

int main()
{
    Fibonacci fib;

    int n, a;

    cout << "Masukkan Bilangan: ";
    cin >> n;
    cout << "Fibonacci (" << n << ")" << endl;
    cout << "Iteratif: ";
    fib.iteratif(n);
    cout << endl;
    cout << "Rekursif: ";
    for (int i = 0; i < n; i++)
    {
        cout << fib.rekursif(i) << " ";
    }
    cout << endl;
    return 0;
}
