//created by WHENNY ZENICA 23343022

#include <stdio.h>

main(void){

	char grade;
	
	printf("Inputkan grade : ");
	scanf("%c", &grade);
	
	switch(grade){
		case 'A':
			printf("Luar biasa!\n");
			break;
		case 'B':
			/*printf("Luar biasa!\n");
			break;*/
		case 'C':
			printf("Bagus!\n");
			break;
		case 'D':
			printf("Anda lulus\n");
			break;
		case 'E':
			/*printf("Luar biasa!\n");
			break;*/
		case 'F':
			printf("Anda remidi\n");
			break;
		default :
			printf("Grade salah!");
	}
}
