/* 	nama tugas     : Jobsheet3
	nama programer : Whenny zenica_23343022
	Kasus Program  : Konversi Suhu
*/
#include<iostream>
using namespace std;
int main(){
	double c, r, k, f;
	cout<<" konversi suhu"<<endl;
	cout<<"masukkan suhu calcius : ";
	cin>>c;
	r = c * 4 / 5;
	k = c + 237;
	f = (c * 9 / 5) + 32;
	cout<<endl<<endl;
	cout<<" Suhu dalam Celcius   = "<<c<<" derajat"<<endl;
	cout<<" Suhu dalam Reamur    = "<<r<<" derajat"<<endl;
	cout<<" Suhu dalam Kelvin    = "<<k<<" derajat"<<endl;
	cout<<" Suhu dalam Farenheit = "<<f<<" derajat"<<endl<<endl;
	
	
}
