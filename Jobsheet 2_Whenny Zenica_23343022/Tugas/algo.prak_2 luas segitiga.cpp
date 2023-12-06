/* 	nama tugas     : Jobsheet2
	nama programer : Whenny zenica_23343022
	Kasus Program  : LuasSegiTiga
*/
#include<iostream>
using namespace std;

int main(){
    const float R = 0.5;
	float L, a, t;
	
	//value a dan t
	cout<<"masukkan panjang alas = ";
	cin>>a;
	cout<<"masukkan tinggi segitiga = ";
	cin>>t;
	 
	//proses perhitungan luas
	L = R * a * t;
	
	//penampilan hasil
	cout<<"Luas dari segitiga berikut "<<" adalah ";
	cout<<L<<" cm2";
		
}
