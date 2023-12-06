/* 	nama tugas     : Jobsheet8
	nama programer : Whenny zenica_23343022
	Kasus Program  : JumlahKurangKaliBagi
*/
#include <stdio.h>

// Fungsi untuk penjumlahan
float tambah(float a, float b) {
    return a + b;
}

// Fungsi untuk pengurangan
float kurang(float a, float b) {
    return a - b;
}

// Fungsi untuk perkalian
float kali(float a, float b) {
    return a * b;
}

#include<stdio.h>
// Fungsi untuk pembagian
float bagi(float a, float b) {
    // Handle pembagian oleh nol
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Pembagian oleh nol tidak diperbolehkan.\n");
        return 0;
    }
}

int main() {
    float angka1, angka2;
    
    printf("Masukkan dua angka: ");
    scanf("%f %f", &angka1, &angka2);

    // Penjumlahan
    printf("Penjumlahan: %.2f\n", tambah(angka1, angka2));

    // Pengurangan
    printf("Pengurangan: %.2f\n", kurang(angka1, angka2));

    // Perkalian
    printf("Perkalian: %.2f\n", kali(angka1, angka2));

    // Pembagian
    printf("Pembagian: %.2f\n", bagi(angka1, angka2));

    return 0;
}
