#include <stdio.h>

int main(){
	int angka;
	printf ("masukan angka:");
	scanf ("%d", &angka);
	
	if (angka % 2 == 0){
		printf ("angka genap\n");
		
	} else{
		printf ("angka ganjil\n");
	}
	 return 0;
}
