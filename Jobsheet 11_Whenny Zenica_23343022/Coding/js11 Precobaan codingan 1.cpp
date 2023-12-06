//created by WHENNY ZENICA 23343022

#include <stdio.h>
int main()
{
	char buff[255];
	FILE *fptr;
	// membuka file
	if ((fptr = fopen("ma.Hubby.txt", "r")) == NULL){
		printf("Error: File tidak ada!");
		// Tutup program karena file gak ada
		return 0;
	}
	
	// baca isi file dengan gets lalu simpan ke buff
	/*fgets(buff,sizeof(buff), fptr);
	printf("%s",buff);
	fgets(buff,sizeof(buff), fptr);
	printf("%s",buff);
	fgets(buff,sizeof(buff), fptr);
	printf("%s",buff);
	fgets(buff,sizeof(buff), fptr);
	printf("%s",buff);*/
	
	while(fgets(buff,sizeof(buff),fptr)){
		printf("%s",buff);
	}
	
	//tutup file
	fclose(fptr);
	
		return 0;
}
