#include <stdio.h>

int toplam(int);

int main(){

    int sayi1;
    printf("Lutfen bir sayiyi giriniz: ");
    scanf("%d",&sayi1);

    printf("%d", toplam(sayi1));    

}

int toplam(int x){

    if (x == 0)
    {
        return 0;
    }
    return x + toplam(x-1);
}