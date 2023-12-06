/* 	nama tugas     : Jobsheet5
	nama programer : Whenny zenica_23343022
	Kasus Program  : Rekap Nilai Mahasiswa
*/
#include <stdio.h>

int main() {
	
	//deklarasi
    double nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas;
    double nilai_akhir;

	//user memasukkan nilai
    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%lf", &nilai_kehadiran);

    printf("Masukkan nilai tugas (0-100): ");
    scanf("%lf", &nilai_tugas);

    printf("Masukkan nilai UTS (0-100): ");
    scanf("%lf", &nilai_uts);

    printf("Masukkan nilai UAS (0-100): ");
    scanf("%lf", &nilai_uas);

    // Menghitung nilai akhir berdasarkan bobot
    nilai_akhir = (0.20 * nilai_kehadiran) + (0.20 * nilai_tugas) + (0.25 * nilai_uts) + (0.35 * nilai_uas);

    // Menentukan kategori nilai
    char kategori;
    if (nilai_akhir >= 91 && nilai_akhir <= 100) {
        kategori = 'A';
    } else if (nilai_akhir >= 86 && nilai_akhir <= 90) {
        kategori = 'A'; //A-
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else if (nilai_akhir >= 81 && nilai_akhir <= 85) {
        kategori = 'B'; //B+
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else if (nilai_akhir >= 76 && nilai_akhir <= 80) {
        kategori = 'B';
    } else if (nilai_akhir >= 66 && nilai_akhir <= 75) {
        kategori = 'B'; //B-
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 56 && nilai_akhir <= 65) {
        kategori = 'C';
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilai_akhir >= 45 && nilai_akhir <= 55) {
        kategori = 'D';
        printf("Maaf, anda tidak lulus!\n");
    } else {
        kategori = 'E';
    }

	//menampilkan nilai 
    printf("Nilai Akhir: %.2lf\n", nilai_akhir);
    printf("Kategori: %c\n", kategori);

    return 0;
}

