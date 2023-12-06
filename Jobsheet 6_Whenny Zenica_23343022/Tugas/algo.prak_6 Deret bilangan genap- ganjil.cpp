/* 	nama tugas     : Jobsheet6
	nama programer : Whenny zenica_23343022
	Kasus Program  : DERET BILANGAN GENAP-GANJIL
*/
#include <stdio.h>

int main() {

        int n;
        
        printf("MASUKKAN BILANGAN: ");
        scanf("%d",&n);
        
        printf("DERET BILANGAN GENAP ADALAH : \n");
        for(int i=2; i<=50; i+=2){
        	printf("%d ",i);
		}
		printf("\n=======================================\n");
		printf("MASUKKAN BILANGAN: ");
        scanf("%d",&n);
        
        printf("DERET BILANGAN GANJIL ADALAH : \n");
        for(int i=1; i<=50; i+=2){
        	printf("%d ",i);
		}
		printf("\n=======================================\n");
		return 0;
    }
