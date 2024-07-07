#include <stdio.h>
#include <stdlib.h>
//dinamik bellek yönetimi
//calloc kullanımı için bir örnek
//calloc hafızada belirli bir yer ayırmaya yarar. geriye void tipinde bir pointer döndürür.
//voidin tipi olmadığından istediğimiz değişkene cast işlemi yapabiliriz
//eğer hafızada yer yoksa NULL döndürür.
//stdlib kütüphanesi olmadan bu fonksiyonlar çalışmaz
//ptr=(int *)calloc(n,sizeof(int)); şeklinde yazılır
//calloc: Belirli bir boyutta ve sayıda bellek ayırır, bellek bloklarını sıfırlar.
int main()
{

int *ptr;
    int n;
    n=5;
    int i;
    printf("girdiğimiz sayı değeri %d\n",n);

    ptr=(int *)calloc(n,sizeof(int));

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