/* 	nama tugas     : Jobsheet8
	nama programer : Whenny zenica_23343022
	Kasus Program  : Luas dan Keliling Lingkaran
*/
#include <stdio.h>

// Fungsi untuk menghitung luas lingkaran
float luas(float radius) {
    return 3.14 * radius * radius;
}

// Fungsi untuk menghitung keliling lingkaran
float keliling(float radius) {
    return 2 * 3.14 * radius;
}

int main() {
    float radius;

    printf("Masukkan radius lingkaran: ");
    scanf("%f", &radius);

    // Menghitung dan menampilkan luas lingkaran
    printf("Luas lingkaran: %.2f\n", luas(radius));

    // Menghitung dan menampilkan keliling lingkaran
    printf("Keliling lingkaran: %.2f\n", keliling(radius));

    return 0;
}
