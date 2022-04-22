/*
2100018439 - Rico Sumantri
2100018452 - Ananda Firdaus
*/

#include <iostream>
#include <fstream>
using namespace std;

class studikasus
{
private:
    int nim, jumlahmk, bayar, jumlahsks, sks[20], totbay, diskon;
    string nama, matkul[20];

public:
    void input();
    void proses();
    void output();
    int hitung(int s[], int n, int &hasil)
    {
        if (n > 0)
        {
            hasil += s[n - 1];
            hitung(s, n - 1, hasil);
        }
        return 0;
    }
};

void studikasus::input()
{
    cout << "Masukkan Nama : ";
    cin >> nama;
    cout << "Masukkan NIM  : ";
    cin >> nim;
    cout << "Banyak Matkul : ";
    cin >> jumlahmk;
    cout << endl;
    for (int i = 0; i < jumlahmk; i++)
    {
        cout << "Nama Matkul    " << i + 1 << " : ";
        cin >> matkul[i];
        cout << "Banyak SKS       : ";
        cin >> sks[i];
    }
}