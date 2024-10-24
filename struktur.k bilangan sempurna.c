#include <stdio.h>

int main() {
    int angka, i, sum = 0;
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    for (i = 1; i < angka; i++) {
        if (angka % i == 0) {
            sum += i;
        }
    }

    if (sum == angka) {
        printf("Bilangan sempurna\n");
    } else {
        printf("Bukan bilangan sempurna\n");
    }
    return 0;
}
