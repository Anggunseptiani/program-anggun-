#include<stdio.h>

int main(){
	int nilai;
	printf("masukan nilai:");
	scanf("%d", &nilai);
	
	if (nilai >= 60){
		printf ("lulus\n");
	} else{
		printf("tidak lulus\n");
	}
	return 0;
}
