/* 	nama tugas     : Jobsheet4
	nama programer : Whenny zenica_23343022
	Kasus Program  : Nilai Akhir sesuai bobot
*/
#include <stdio.h>
// menghitung nilai akhir

int main() {
    float nilaiPresensi = 85;
    float nilaiPraktek = 65;
    float nilaiUTS = 80;
    float nilaiUAS = 75;

    // Menghitung nilai akhir sesuai bobot
    float nilaiAkhir = (nilaiPresensi * 0.10) + (nilaiPraktek * 0.20) + (nilaiUTS * 0.30) + (nilaiUAS * 0.40);

    printf("Nilai Akhir: %.2f\n", nilaiAkhir);

    return 0;
}

