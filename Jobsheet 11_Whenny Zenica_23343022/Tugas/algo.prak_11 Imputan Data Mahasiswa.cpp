/* 	nama tugas     : Jobsheet11
	nama programer : Whenny zenica_23343022
	Kasus Program  : Imputan Data Mahasiswa
*/
#include <stdio.h>

int main(){
	char buff[255];
	char text[255];
	FILE *fptr;
	
	//membuka file
	fptr = fopen("datamahasiswa.txt", "w");
	
	//menggunakan perulangan untuk menginput data mahasiswa
	for(int i=1; i<3; i++){
		printf("\nMasukkan data mahasiswa ke-%d\n", i);
		
		char nama[50];
		char nim[10];
		char jurusan[20];
		char prodi[20];
		
		//inputan oleh user
		printf("Nama : ");
		fgets(nama, sizeof(nama), stdin);
		printf("NIM : ");
		fgets(nim, sizeof(nim), stdin);
		printf("Jurusan : ");
		fgets(jurusan, sizeof(jurusan), stdin);
		printf("Program Studi : ");
		fgets(prodi, sizeof(prodi), stdin);
		
		//mengambil inputan user
		fprintf(fptr, "\nMasukkan data Mahasiswa ke-%d\n", i);
		fprintf(fptr, "Nama : %s", nama);
		fprintf(fptr, "NIM : %s", nim);
		fprintf(fptr, "Jurusan : %s", jurusan);
		fprintf(fptr, "Prodi : %s", prodi);
	}
	
	printf("Data Mahasiswa berhasil disimpan");
	
	// tutup file
	fclose(fptr);
	
	
}
