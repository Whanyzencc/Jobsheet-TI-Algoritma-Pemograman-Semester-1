/* 	nama tugas     : Jobsheet4
	nama programer : Whenny zenica_23343022
	Kasus Program  : Kasir Sederhana
*/
#include<iostream>
using namespace std;

int main(){
	int  harga_barang, jumlah_barang;
	char nama;
	cout<<"      PROGRAM KASIR SEDERHANA"<<endl;
	cout<<"====================================="<<endl;
	printf("Masukkan Nama           : "); 
    scanf ("%[^\n]s",&nama);
	cout<<"Masukkan Harga Barang   : ";
 	cin>>harga_barang;
	cout<<"Masukkan Jumlah Barang  : ";
	cin>>jumlah_barang;
	
	long total = harga_barang * jumlah_barang;
	int pembayaran, kembalian;
	
	cout<<"===================================="<<endl;
	cout<<"Total                  : "<<total<<endl;
	cout<<"Input Pembayaran       : ";
	cin>>pembayaran;
	cout<<"===================================="<<endl;
	kembalian = pembayaran - total;
	cout<<"kembali                : "<<kembalian<<endl;
}
