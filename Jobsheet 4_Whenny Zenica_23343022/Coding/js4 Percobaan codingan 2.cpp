//created by WHENNY ZENICA 23343022
#include <stdio.h>

main(void){
	
	int a, b;
	//float a, b; //gunakan apabila data yang diinputkan adalah desimal
	
	//meminta input dari user
	printf("Inputkan nilai a: ");
	scanf("%i", &a);
	
	printf("Inputkan nilai b: ");
	scanf("%i", &b);
	
	printf("Hasil a + b: %i\n", a + b); //penjumlahan
	printf("Hasil a - b: %i\n", a - b); //pengurangan
	printf("Hasil a * b: %i\n", a * b); //perkalian
	printf("Hasil a / b: %i\n", a / b); //pembagian
	printf("Hasil a % b: %i\n", a % b); //sisa bagi
	
	//printf("Hasil a / b : %f\n", a / b);
}
