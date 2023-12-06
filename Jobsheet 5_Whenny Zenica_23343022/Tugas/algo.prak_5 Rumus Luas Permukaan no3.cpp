/* 	nama tugas     : Jobsheet5
	nama programer : Whenny zenica_23343022
	Kasus Program  : Rumus Luas Permukaan
*/
#include <stdio.h>

int main() {
	
	//deklarasi
    int pilihan;
    double luas = 0.0;

	//user memilih rumus
    printf("Pilihan Rumus Luas Permukaan:\n");
    printf("a) Luas Permukaan Bola\n");
    printf("b) Luas Permukaan Kubus\n");
    printf("c) Luas Permukaan Balok\n");
    printf("d) Luas Permukaan Tabung\n");
    printf("Masukkan pilihan (a/b/c/d): ");
    scanf(" %c", &pilihan);

    switch (pilihan) {
        case 'a': {
            double jari_jari;
            printf("Masukkan jari-jari bola (cm): ");
            scanf("%lf", &jari_jari);
            luas = 4.0 * 3.14 * jari_jari * jari_jari;
            break;
        }
        case 'b': {
            double sisi;
            printf("Masukkan panjang sisi kubus (cm): ");
            scanf("%lf", &sisi);
            luas = 6.0 * sisi * sisi;
            break;
        }
        case 'c': {
            double panjang, lebar, tinggi;
            printf("Masukkan panjang balok (cm): ");
            scanf("%lf", &panjang);
            printf("Masukkan lebar balok (cm): ");
            scanf("%lf", &lebar);
            printf("Masukkan tinggi balok (cm): ");
            scanf("%lf", &tinggi);
            luas = 2.0 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
            break;
        }
        case 'd': {
            double jari_jari_tabung, tinggi_tabung;
            printf("Masukkan jari-jari tabung (cm): ");
            scanf("%lf", &jari_jari_tabung);
            printf("Masukkan tinggi tabung (cm): ");
            scanf("%lf", &tinggi_tabung);
            luas = 2.0 * 3.14 * jari_jari_tabung * (jari_jari_tabung + tinggi_tabung);
            break;
        }
        default:
            printf("Pilihan tidak valid.\n");
            return 1;
    }

	//menampilkan hasil
    printf("Luas Permukaan: %.2lf cm^2\n", luas);

    return 0;
}

