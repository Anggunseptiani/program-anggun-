#include<stdio.h>

int main(){
	char password[20];
	printf("masukan passwod:");
	scanf("%s", password);
	
	if (strcmp(password, "12345")== 0){
		printf("login berhasil\n");
	} else {
		printf("login gagal\n");
	} 
	return 0;
	
}
