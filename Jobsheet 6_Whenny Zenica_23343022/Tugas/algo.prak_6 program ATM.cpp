/* 	nama tugas     : Jobsheet6
	nama programer : Whenny zenica_23343022
	Kasus Program  : Program ATM
*/
#include <stdio.h>

int saldo = 175000;  // Saldo awal Hattori
const int saldo_minimal = 50000;  // Saldo minimal yang harus disisakan

void cekSaldo() {
    printf("Saldo Anda saat ini: Rp. %d\n", saldo);
}

void setoran() {
    int jumlah_setoran;
    printf("Masukkan jumlah uang yang ingin Anda setorkan: Rp. ");
    scanf("%d", &jumlah_setoran);

    saldo += jumlah_setoran;
    printf("Setoran berhasil.\n");
}

void penarikan() {
    if (saldo <= saldo_minimal) {
        printf("Saldo Anda tidak mencukupi untuk melakukan penarikan.\n");
        return;
    }

    int jumlah_penarikan;
    printf("Masukkan jumlah uang yang ingin Anda tarik: Rp. ");
    scanf("%d", &jumlah_penarikan);

    if (jumlah_penarikan > saldo - saldo_minimal) {
        printf("Saldo Anda tidak mencukupi untuk melakukan penarikan sesuai kebijakan bank.\n");
    } else {
        saldo -= jumlah_penarikan;
        printf("Penarikan berhasil.\n");
    }
}

int main() {
    char menu;
    int rek = 123;
    char nama_akun[] = "Hattori";

    printf("Selamat datang, %s!\n", nama_akun);
    printf("No Rek: %d\n", rek);

    do {
        printf("\nMenu ATM:\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu: ");
        scanf(" %c", &menu);

        switch (menu) {
            case '1':
                cekSaldo();
                break;

            case '2':
                setoran();
                break;

            case '3':
                penarikan();
                break;

            case '4':
                printf("Terima kasih. Sampai jumpa!\n");
                break;

            default:
                printf("Menu tidak valid. Silakan coba lagi.\n");
        }
    } while (menu != '4');

    return 0;
}
