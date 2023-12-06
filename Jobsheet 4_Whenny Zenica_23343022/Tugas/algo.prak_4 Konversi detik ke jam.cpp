/*Jobsheet 4    :nomor 1
  progammer     :Whenny zenica_23343022
  kasus program :Menkonversi total detik ke waktu jam
*/

#include<iostream>
using namespace std;

int main()
{
	int td,jj,mm,dd,sm;
	
	cout<<"Masukkan total detik : ";
	cin>>td;
	
	jj=td/3600;
	sm=td%3600;
	mm=sm/60;
	dd=sm%60;
	
	cout<<"Total waktu yang anda hasilkan : ";
	cout<<jj<<":"<<mm<<":"<<dd;
	
return 0;
	
}
