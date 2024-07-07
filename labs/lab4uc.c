#include <stdio.h>
#include <string.h>

// Fonksiyon prototipi
int palindromKontrol(char kelime[], int baslangic, int bitis);

int main() {
    char kelime[100];
    
    printf("Bir kelime giriniz: ");
    scanf("%s", kelime);
    
    if (palindromKontrol(kelime, 0, strlen(kelime) - 1)) {
        printf("%s palindrom bir kelime.\n", kelime);
    } else {
        printf("%s palindrom bir kelime degil.\n", kelime);
    }
    
    return 0;
}

int palindromKontrol(char kelime[], int baslangic, int bitis) {
    // Base case: Eğer baslangic bitise veya ötesine geldiyse, palindromdur.
    if (baslangic >= bitis) {
        return 1;
    }
    
    // Eğer karşılıklı karakterler eşit değilse, palindrom değildir.
    if (kelime[baslangic] != kelime[bitis]) {
        return 0;
    }
    
    // Recurion: Bir sonraki karakterleri kontrol etmek için fonksiyonu kendisiyle çağır.
    return palindromKontrol(kelime, baslangic + 1, bitis - 1);
}
