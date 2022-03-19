#include <iostream>
using namespace std;

int main(){
	char lagi;
    float x,y;
    int pil;

    menu :
    system ("cls");
    cout << "=========================\n";
    cout << "Kalkulator Sederhana C++ \n";
    cout << "=========================\n";
    cout << "Pilihan Operator\n";
    cout << "1.Penjumlahan\n";
    cout << "2.Pengurangan\n";
    cout << "3.Pembagian\n";
    cout << "4.Perkalian\n";
    cout << "Masukkan Kode Operator : ";cin >> pil;
    if (pil > 4 || pil < 1){
		cout << "\nKode yang anda masukkan tidak ada \nSilahkan masukkan ulang kode .";
		system("pause");
        goto menu;
    }
    else {
        cout << "Angka Pertama : ";cin >> x;
        cout << "Angka Kedua : ";cin >> y;

    if (pil == 1){
	cout << "\nHasil penjumlahan dari "<<x<<" + "<<y<<" adalah : "<<x+y<<endl;
	cout << "\nMasih lanjut [y/t]? ";
		cin >> lagi;
		if (lagi == 'y')
		goto menu;
		else return 0;
        }
    else if (pil == 2){
            cout << "\nHasil pengurangan dari "<<x<<" - "<<y<<" adalah : "<<x-y<<endl;
            cout << "\nMasih lanjut [y/t]? ";
		cin >> lagi;
		if (lagi == 'y')
		goto menu;
		else return 0;
        }
