/* 	nama tugas     : Jobsheet8
	nama programer : Whenny zenica_23343022
	Kasus Program  : multiply
*/
#include<stdio.h>
int multiply(int a, int b){
	if(b==1){
		return 0;
	}
	else{
		return a +multiply (a, b-1);//fungsi multiply memanggil dirinya sendiri
	}
}
main(void){
	int num1= 12;
	int num2= 6;
	int result = multiply(num1,num2);
	printf("%d x %d = %d\n",num1, num2, result);
	
int main();
{
	int a,b;
	printf("masukkan angka ke1 : ");
	scanf("%d", &a);
	printf("masukkan angaka ke2 : ");
	scanf("%d", &b);
}
  
}
