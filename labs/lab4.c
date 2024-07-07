#include <stdio.h>

// Fonksiyon prototipi
float ortalamaHesapla(int dizi[], int n);

int main() {
    int n, i;
    
    printf("Kac adet sayi gireceksiniz? ");
    scanf("%d", &n);
    
    int sayilar[n];
    
    for (i = 0; i < n; i++) {
        printf("Sayi %d: ", i + 1);
        scanf("%d", &sayilar[i]);
    }
    
    float ortalama = ortalamaHesapla(sayilar, n);
    
    printf("Girilen sayilarin ortalamasi: %.2f\n", ortalama);
    
    return 0;
}

float ortalamaHesapla(int dizi[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return (dizi[n - 1] + ortalamaHesapla(dizi, n - 1) * (n - 1)) / n;
    }
}
