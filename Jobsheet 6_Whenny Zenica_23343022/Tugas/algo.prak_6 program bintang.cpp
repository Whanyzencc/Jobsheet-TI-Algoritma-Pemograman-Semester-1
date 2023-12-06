/* 	nama tugas     : Jobsheet6
	nama programer : Whenny zenica_23343022
	Kasus Program  : Pattren
*/
#include<stdio.h>
int main(){
	int i= 0;
	int j= 0;
	int k= 0;
	
	printf("pola 1\n");
	for(int i= 0; i <= 5; i++){
		for(int j =0; j<= i; j++){
			printf("*");
		}
		printf("\n");
	}
	 printf("\n\n");
	 
	printf("pola 2\n");
	for( i= 0; i < 5; i++){
		for( j=0; j< i; j++){
			printf(" ");
		}
		for( k= 5; k> i; k--){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
