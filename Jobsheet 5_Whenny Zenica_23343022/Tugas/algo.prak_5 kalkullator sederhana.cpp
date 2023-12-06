/* 	nama tugas     : Jobsheet5
	nama programer : Whenny zenica_23343022
	Kasus Program  : PROGRAM KALKULATOR
*/
#include<iostream>
using namespace std;
int main(){
	int a, b,tambah,kali,kurang,bagi;
	
	cout<<"==================="<<endl;
	cout<<"PROGRAM KALKULATOR C++"<<endl;
    cout<<"==================="<<endl;
    
    cout<<"MASKUKKAN NILAI A : ";cin>>a;
    cout<<"MASKUKKAN NILAI B : ";cin>>b;
    
    tambah = a + b;
    kali   = a * b;
    kurang = a - b;
    bagi   = a / b;
    
    cout<<"=================="<<endl;
    cout<<"HASIL DARI TAMBAH  : "<<tambah<<endl;
    cout<<"HASIL DARI KALI    : "<<kali<<endl;
    cout<<"HASIL DARI KURANG  : "<<kurang<<endl;
    cout<<"HASIL DARI BAGI    : "<<bagi<<endl;
    
    return 0;
    
    
}
