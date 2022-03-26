//Rico Sumantri - 2100018439
//Ananda Firdaus - 2100018452

#include <iostream>
using namespace std;

class Bensin{
      public :
             Bensin();
             void pilihan();
             void hitung_uang();
      private :
              double uang, liter, tampil;
              char pil;
              char ambil;
              double harga, pertalite, pertamax;
              string nama;
};     

Bensin::Bensin(){
     harga = 0;
     pertalite = 7000;
     pertamax = 9000;
     }
void Bensin::pilihan(){
     cout<<"selamat Datang di SPBU NACO"<<endl;
     cout<<"jenis bensin : "<<endl;
     cout<<"1 Pertalite "<<endl;
     cout<<"2 Pertamax "<<endl;
     cout<<"masukkan pilihan anda = ";
     cin>>ambil;
     if(ambil == '1' || ambil == '2'){
     cout << "Masukkan Nama: ";
     cin >> nama;
     hitung_uang();   
     }
 }
void Bensin::hitung_uang(){
     cout<<"masukkan jumlah uang : ";
     cin>> uang;
     if(ambil == '1')
	 {
	 	cout << "==============================" << endl;
        cout << "Nama : " << nama << endl;
		cout << "Jenis Bensin : Pertalite" << endl;
		harga = pertalite;
     }
     else if(ambil == '2')
	 {
	 	cout << "==============================" << endl;
	 	cout << "Nama : " << nama << endl;
		cout << "Jenis Bensin : Pertamax" << endl;
        harga = pertamax;
     }
     tampil = uang / harga;
     cout << "Total Bayar : " << uang << endl;
     cout<<"jumlah Bensin : "<<tampil <<" liter"<<endl;
    cout << "==============================" << endl;
     }

int main()
{
    Bensin x;
    x.pilihan();
    return 0;
}
