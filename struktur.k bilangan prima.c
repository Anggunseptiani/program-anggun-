#include<stdio.h>

int main(){
	int angka, i , prima = 1;
	printf("masukan angka:");
	scanf ("%d", &angka);
	
	if (angka <= 1){
		prima = 0;
	} else{
		for (i = 2; i <= angka / 2; i++){
			if (angka % i == 0){
				prima = 0;
				break;
			}
		}
	}
	if (prima == 1){
		printf ("bilangan prima\n");
	} else {
		printf("bukan bilangan prima:");
	}
	 return 0;
}
