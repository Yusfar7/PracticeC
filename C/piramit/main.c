#include <stdio.h>

int main() {
    int i, j, k, space, rows;

    printf("Piramidin boyutunu giriniz: ");
    scanf("%d", &rows);

    // �st k�s�m
    for (i = 1; i <= rows; ++i) {
        // Bo�luklar� ekle
        for (space = 1; space <= rows - i; ++space) {
            printf("  ");
        }
        // Artan s�ral� say�lar� ekle
        for (j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        // Azalan s�ral� say�lar� ekle
        for (k = i - 1; k >= 1; --k) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
