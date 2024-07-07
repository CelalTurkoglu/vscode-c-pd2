#include <stdio.h>
#include <stdlib.h>
//dinamik bellek yönetimi
//malloc kullanımı için bir örnek
//malloc hafızada belirli bir yer ayırmaya yarar. geriye void tipinde bir pointer döndürür.
//voidin tipi olmadığından istediğimiz değişkene cast işlemi yapabiliriz
//eğer hafızada yer yoksa NULL döndürür.
//stdlib kütüphanesi olmadan bu fonksiyonlar çalışmaz
//ptr=(int *)malloc(n*sizeof(int)); şeklinde yazılır
//malloc: Belirli bir boyutta bellek ayırır, bellek blokları başlatılmamıştır.
//ptr=(int *)malloc(40); şeklinde de yazsan olur.
int main()
{

    int *ptr;
    int n;
    n=5;
    int i;
    printf("girdiğimiz sayı değeri %d\n",n);

    ptr=(int *)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("hafıza bolunmedi\n");
    }

    else
    {
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
        }

        printf("elemanlarım\n");
        for(i=0;i<n;i++)
        {
            printf("%d, ",ptr[i]);
        }
    }

    return 0;
}