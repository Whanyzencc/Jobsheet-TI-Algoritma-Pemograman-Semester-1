/* 	nama tugas     : Jobsheet3
	nama programer : Whenny zenica_23343022
	Kasus Program  : Volume dan LuasPermukaan Bola
*/
#include<stdio.h>

int main(){
	printf("   PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BOLA\n");
	printf("=========================================================\n\n");
	
	int diameter, r;
	const float phi = 3.14;
	double L, V;
	
	printf("Inputkan diameter : ");
	scanf("%i",&diameter);
	
	r = diameter / 2;
	V = (4 * phi * r * r)/3;
	L = 4 * phi * r * r;
	
	printf("=========================================================\n\n");
	
	printf("Jari jari : %i cm\n",r);
	printf("Volume Bola : %.2f cm2\n",V);
	printf("Luas Permukaan Bola : %.2f cm2\n",L);
	
	printf("---------------------------------------------------------\n\n");
	
	return 0;
}
