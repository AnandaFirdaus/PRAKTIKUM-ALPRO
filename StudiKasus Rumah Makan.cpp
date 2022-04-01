//Rico Sumantri - 2100018439
//Farid Hibaturrachman - 2100018444
//Ananda Firdasu - 2100018452

#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;

void shop(){
	int jmlhbrg,qt,a,jarak,hrgakhir;
	long total,alltotal;
	const char *barang[6] = {"Ayam Geprek","Ayam Goreng","Udang Goreng","Cumi Goreng","Ayam Bakar"};
	int harga[6] = {21000,17000,19000,20000,25000};
		
	ofstream outfile;
	outfile.open("coba.txt");

	cout<<"Jumlah Barang: ";cin>>jmlhbrg;cin.ignore();
   	
	   for(int i=1;i<=jmlhbrg;i++){
	
	cout<<"Nomor barang : ";cin>>a;
		outfile<<"Nama barang : "<<barang[a]<<endl;
	
	cout<<"Kuantitas: ";cin>>qt;
		outfile<<"Jumlah : "<<qt<<endl;
	
	cout<<"Harga satuan : "<<harga[a]<<endl;
		outfile<<"Harga Satuan : "<<harga[a]<<endl;
	
	total=qt*harga[a];
	
	cout<<"Total: "<<total<<endl;
		outfile<<"Total : "<<total<<endl;
	
	alltotal=alltotal+total;	
	}