#include <stdio.h>

int main (){
	int usia;
	printf("masukan usia:");
	scanf("%d", &usia);
	
	if (usia >= 18){
		printf ("dewasa\n");
	} else{
		printf ("belum dewasa\n");
	}
	 return 0;
}
