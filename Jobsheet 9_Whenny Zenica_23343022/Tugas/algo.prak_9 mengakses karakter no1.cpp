/* 	nama tugas     : Jobsheet9
	nama programer : Whenny zenica_23343022
	Kasus Program  : mengakses karakter
*/
#include <stdio.h>

int main() {
    char string[] = "BORLAND";
    char *ptr = string;

    // Loop untuk mengakses karakter dari kanan ke kiri
    for (int i = 6; i >= 0; i--) {
        // Loop untuk mencetak karakter dari posisi saat ini hingga akhir
        for (int j = i; j <= 6; j++) {
            printf("%c", *(ptr + j));
        }
        printf("\n");
    }

    return 0;
}
