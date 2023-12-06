/* 	nama tugas     : Jobsheet7
	nama programer : Whenny zenica_23343022
	Kasus Program  : Jumlah NIlai rata"
*/
#include <stdio.h>

int main() {
	
    int n = 5; // Jumlah mahasiswa
    float nilai[n]; // Array untuk menyimpan nilai

    // Meminta input nilai dari 20 mahasiswa
    for (int i = 0; i < n; i++) {
        printf("Masukkan nilai mahasiswa ke-%d : ", i + 1);
        scanf("%f", &nilai[i]);
    }

    // Menghitung total nilai
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += nilai[i];
    }

    // Menghitung rata-rata
    float rata_rata = total / n;

    // Menampilkan rata-rata nilai
    printf("Rata-rata nilai mahasiswa : %.2f\n", rata_rata);

    return 0;
}

