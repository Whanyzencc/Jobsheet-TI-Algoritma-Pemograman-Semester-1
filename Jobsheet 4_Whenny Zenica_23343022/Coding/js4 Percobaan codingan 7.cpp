//created by WHENNY ZENICA 23343022

#include <stdio.h>

int main(){
	/**membuat pointer
	int *a = 5;
	
	//mengambil alamat memori dari pointer a
	printf("alamat memori variabel a adalah %x\n", &a);**/
	
	
    // membuat variabel integer
    int value = 5;

    // membuat pointer dan memberikan alamat memori variabel
    int *a = &value;

    // mengambil alamat memori dari pointer a
    printf("Alamat memori variabel a adalah %p\n", a);

    return 0;
}

