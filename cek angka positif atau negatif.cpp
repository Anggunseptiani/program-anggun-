#include <stdio.h>

int main() {
    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    if (angka >= 0) {
        printf("Angka positif\n");
    } else {
        printf("Angka negatif\n");
    }
    return 0;
}
