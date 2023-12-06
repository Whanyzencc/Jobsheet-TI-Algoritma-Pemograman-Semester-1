/* 	nama tugas     : Jobsheet2
	nama programer : Whenny zenica_23343022
	Kasus Program  : Data Nilai Akhir
*/
#include<cstdlib>
#include <iostream>
#include <stdio.h>



using namespace std;

int main(int argc,char *argv[]) 
{
	fflush (stdin);
char nama[100];

cout<<"MASUKAN DATA ANDA DENGAN BENAR";
cout<<"\n";
cout<<"Nama            :  "; 
cin>> nama;
cin>> nama;
cout<<"NIM             : ";
cin>> nama;
cout<<"Prodi           : ";
cin>> nama;
cout<<"Fakultas        : ";
cin>> nama;

  const float Nilai = 100;
  float nilai, Praktikum, UTS, UAS;
  
//value praktikum,UTS,UAS
cout<<"Nilai Praktikum : ";
cin>> nama;
cout<<"Nilai UTS       : ";
cin>> UTS;
cout<<"Nilai UAS       : ";
cin>> UAS;


//proses perhitungan luas
	nilai = Praktikum + UTS + UAS *Nilai;

//penampilan hasil
	cout<<"Nilai Akhir    : "<<nilai;
	


return 0;


	
	
	

	

}
