#include <stdio.h>

// Fonksiyon prototipi
void ikilikYazdir(int sayi);

int main() {
    int sayi;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    printf("Sayinin ikilik tabandaki karsiligi: ");
    ikilikYazdir(sayi);
    
    printf("\n");
    
    return 0;
}

void ikilikYazdir(int sayi) {
    if (sayi > 1) {
        ikilikYazdir(sayi / 2);
    }
    printf("%d", sayi % 2);
}
