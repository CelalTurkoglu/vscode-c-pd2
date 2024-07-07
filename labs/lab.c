#include <stdio.h>

int EBOB(int,int,int);

int main(){

    int sayi1, sayi2, bob;
    printf("Lutfen iki sayiyi giriniz.\n ");
    scanf("%d %d",&sayi1,&sayi2);

    bob = EBOB(sayi1>sayi2 ? sayi1 : sayi2 ,sayi1>sayi2 ? sayi2 : sayi1, sayi1>sayi2 ? sayi2 : sayi1);
    printf("%d ve %d'nin EBOB'u %d'dir",sayi1, sayi2, bob);
    

}

int EBOB(int buyuk, int kucuk, int sayac){

    if (sayac == 1)
    {
        return 1;
    }
    if (buyuk%sayac == 0 && kucuk%sayac == 0)
    {
        return sayac;
    }
    return EBOB(buyuk,kucuk,sayac-1);
}