#include <stdio.h>
#include <stdlib.h>
//dinamik bellek yönetimi
//stdlib.h olmadan çalışmaz
//free(ptr); şeklinde yazılır
//malloc ve calloc ile hafızadan ayrılan alanın tekrar heap alanına serbest bırakılmasında kullanıloır
//free kullanmak önemli, çöp toplayıcı c dilinde yok free ile manuel yapılıyor.
int main()
{
    int *ptr,*ptr1;
    int n;
    n=5;
    int i;
    printf("Girdigimiz sayi degeri %d\n",n);

    ptr=(int *)malloc(n*sizeof(int));
    ptr1=(int *)calloc(n,sizeof(int));

    if(ptr ==NULL || ptr1== NULL)
    {
        printf("Bellekten ayirma islemi basarisiz\n");
        exit(0);
    }

    else
    {
    printf("Malloc kullanarak basarili bir sekilde ayirma islemini yaptim\n");
    free(ptr);
    printf("Malloc için ayırılan yer serbest birakildi\n");

    printf("Calloc kullanarak basarili bir sekilde ayirma islemini yaptim\n");
    free(ptr1);
    printf("Calloc için ayırılan yer serbest birakildi\n");

    }


    return 0;
}
