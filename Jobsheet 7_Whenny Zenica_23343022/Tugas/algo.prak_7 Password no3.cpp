/* 	nama tugas     : Jobsheet7
	nama programer : Whenny zenica_23343022
	Kasus Program  : Password
*/
#include <stdio.h>

int main() {
    // Data login yang benar
    char username[] = "Whenny Zenica";
    char password[] = "Wayzenc18";

    char input_username[50];
    char input_password[50];

    // Meminta pengguna memasukkan username dan password
    printf("Masukkan username : ");
    scanf("%s", input_username);
    printf("Masukkan password : ");
    scanf("%s", input_password);

    // Memeriksa apakah username dan password sesuai
    int username_match = 1;
    int password_match = 1;

    for (int i = 0; username[i] != '\0' || input_username[i] != '\0'; i++) {
        if (username[i] != input_username[i]) {
            username_match = 0;
            break;
        }
    }
 
    for (int i = 0; password[i] != '\0' || input_password[i] != '\0'; i++) {
        if (password[i] != input_password[i]) {
            password_match = 0;
            break;
        }
    }

    if (username_match && password_match) {
        printf("\nBerhasil login\n");
    } else {
        printf("\nPassword salah\n");
    }

    return 0;
}
