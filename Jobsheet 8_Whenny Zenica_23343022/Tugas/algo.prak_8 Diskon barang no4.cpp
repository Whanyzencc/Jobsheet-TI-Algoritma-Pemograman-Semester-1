/* 	nama tugas     : Jobsheet8
	nama programer : Whenny zenica_23343022
	Kasus Program  : Diskon barang
*/
#include <stdio.h>

// Fungsi untuk menghitung besar potongan
float potong(float total_pembelian) {
    float diskon = 0;

    // Menentukan diskon berdasarkan ketentuan
    if (total_pembelian > 1000000 && total_pembelian < 3000000) {
        diskon = 0.20;
    } else if (total_pembelian >= 3000000) {
        diskon = 0.35;
    }

    // Menghitung besarnya potongan
    return total_pembelian * diskon;
}

int main() {
    float total_pembelian;

    // Meminta pengguna memasukkan total pembelian
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &total_pembelian);

    // Menghitung dan menampilkan besar diskon
    float besar_diskon = potong(total_pembelian);
    printf("Besar Diskon : %.2f\n", besar_diskon);

    // Menghitung dan menampilkan besar yang harus dibayarkan
    float besar_bayar = total_pembelian - besar_diskon;
    printf("Besar Yang Harus Dibayarkan : %.2f\n", besar_bayar);

    return 0;
}
