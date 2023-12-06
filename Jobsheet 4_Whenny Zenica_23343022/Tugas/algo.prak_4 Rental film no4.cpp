/* 	nama tugas     : Jobsheet4
	nama programer : Whenny zenica_23343022
	Kasus Program  : Rental film
*/
#include <stdio.h>
// menghitung rental fim

int main() {
    int durasiFilm = 3;  // Durasi film dalam jam
    float tarifPertama = 15000;  // Tarif untuk jam pertama
    float tarifBerikutnya = 0.5 * tarifPertama;  // Tarif untuk jam berikutnya

    // Menghitung total biaya berdasarkan durasi
    float totalBiaya;
    if (durasiFilm == 1) {
    totalBiaya = tarifPertama;
    
    } else if (durasiFilm > 1) {
    totalBiaya = tarifPertama + (tarifBerikutnya * (durasiFilm - 1));
    
    } else {
    printf("Durasi film harus lebih dari 0 jam.\n");
    }

    printf("Total biaya penyewaan film untuk %d jam: Rp %.2f\n", durasiFilm, totalBiaya);

    return 0;
}


