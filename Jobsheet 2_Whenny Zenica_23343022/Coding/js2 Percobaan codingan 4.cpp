//Created By WHENNY ZENICA_23343022

#include <stdio.h>

int main() {
    //membuat Variabel
    char name[20], web_address[30];
    
    printf("Nama: ");
    scanf("%19s", name); // Batasi input untuk menghindari buffer overflow
    
    printf("Alamat web: ");
    scanf("%29s", web_address); // Batasi input untuk menghindari buffer overflow
    
    printf("\n----------------------------\n");
    printf("Nama yang diinputkan: %s\n", name); // Perbaiki format string
    printf("Alamat web yang diinputkan: %s\n", web_address);
    
    return 0;
}
