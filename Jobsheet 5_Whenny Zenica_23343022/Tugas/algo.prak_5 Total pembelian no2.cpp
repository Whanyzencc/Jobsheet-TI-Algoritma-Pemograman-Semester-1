/* 	nama tugas     : Jobsheet5
	nama programer : Whenny zenica_23343022
	Kasus Program  : Total pembelian
*/
#include <stdio.h>

int main() {
	
	//deklarasi
    double total_pembelian;
    double diskon = 0.0;
    double cashback = 0.0;
	//meminta user memasukkan total pembelian
    printf("Masukkan total pembelian (Rp): ");
    scanf("%lf", &total_pembelian);
    
    if (total_pembelian <= 75000) {
        diskon = total_pembelian * 0.05;
    } else if (total_pembelian > 75000 && total_pembelian <= 125000) {
        diskon = total_pembelian * 0.15;
    } else {
        diskon = total_pembelian * 0.25;
        cashback = 5000.0;
    }
	//menghitung 
    double total_harga = total_pembelian - diskon + cashback;

	//menampilkan
    printf("Total pembelian : Rp.%.2lf\n", total_pembelian);
    printf("Diskon : Rp.%.2lf\n", diskon);
    printf("Cashback : Rp.%.2lf\n", cashback);
    printf("Total harga yang harus dibayar : Rp.%.2lf\n", total_harga);

    return 0;
}
