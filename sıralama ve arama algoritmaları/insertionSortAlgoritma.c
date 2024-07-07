#include <stdio.h>
#include <stdlib.h>
//insertion sort sıralama
//araya ekleme deniliyor
//dizideki sayıları sıralıyor bir olayı yok.
//Sıralı bir listeye eleman eklemek için uygundur.
void insertionsort(int dizi[],int n)
{
    int ekle,k,i;
    for(i=1;i<n;i++)
    {
        ekle=dizi[i];
        for(k=i-1;k>=0 && ekle <= dizi[k];k--)
                dizi[k+1]=dizi[k]; //geriye kaydırma
        dizi[k+1]=ekle; //uygun yer boşaltıldı eklendi
        
    } 
}
int main()
{
    int i=0,a[5];
    printf("sıralamak istediğin 5 sayı gir\n");
    while(i<5)
    {
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    insertionsort(a,5);

    printf("insertion sort işleminden sonra..\n");
    while(i<5)
    {
        printf("%d ",a[i]);
        i++;
    }

    return 0;
}