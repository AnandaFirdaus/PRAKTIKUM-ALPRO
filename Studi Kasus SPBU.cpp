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
