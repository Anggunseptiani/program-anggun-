#include<stdio.h>

int main(){
	char huruf;
	printf("masukan huruf:");
	scanf("%c", &huruf);
	
	if(huruf == 'a' || huruf == 'e' || huruf == 'i' || huruf == 'o' || huruf == 'u'){
		printf("huruf vokal\n");
	} else {
		printf("huruf konsonan\n");
	}
	return 0;n
}
