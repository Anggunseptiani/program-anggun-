#include<stdio.h>

int main(){
	int suhu;
	printf("masukan suhu:");
	scanf("%d", &suhu);
	
	if (suhu > 30){
		printf ("masukan suhu panas\n");
	} else if (suhu > 10){
		printf ("suhu dingin\n");
	} else{
		printf("suhu normal\n");
	}
		
	return 0;
}
