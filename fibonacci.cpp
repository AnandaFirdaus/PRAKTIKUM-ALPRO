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