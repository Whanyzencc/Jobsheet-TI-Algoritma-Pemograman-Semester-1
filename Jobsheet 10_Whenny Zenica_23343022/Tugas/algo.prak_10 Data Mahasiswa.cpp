/* 	nama tugas     : Jobsheet10
	nama programer : Whenny zenica_23343022
	Kasus Program  : Data Mahasiswa
*/
#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    int npm;
    char nama[100];
    char tanggal_lahir[20];
    char alamat[100];
    long long hp;
};

int main() {
    char lagi;
    
    struct Mahasiswa mhs [50];
    int jumlahMahasiswa;
    
    do {

        printf("Masukkan NPM : ");
        scanf("%d", mhs[jumlahMahasiswa].npm);

        printf("Masukkan nama : ");
        scanf(" %[^\n]s", mhs[jumlahMahasiswa].nama);

        printf("Masukkan tanggal lahir : ");
        scanf("%s", mhs[jumlahMahasiswa].tanggal_lahir);

        printf("Masukkan alamat : ");
        scanf(" %[^\n]s", mhs[jumlahMahasiswa].alamat);

        printf("Masukkan nomor HP : ");
        scanf("%11d", mhs[jumlahMahasiswa].hp);

        jumlahMahasiswa++;
        
    } while (lagi == 'y' || lagi == 'Y');

    // Menampilkan data mahasiswa
    printf("\nBentuk tampilan output:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("%-15d%-20s%-20s%-20s%-10d\n", mhs[i].npm, mhs[i].nama, mhs[i].tanggal_lahir, mhs[i].alamat, mhs[i].hp);
    }

    return 0;
}
