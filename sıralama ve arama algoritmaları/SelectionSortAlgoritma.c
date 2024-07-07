#include <stdio.h>
#include <stdlib.h>
//Eğer bir eleman olması gereken yerde ise bulunduğu sıra değiştirilmez.
/*Yarı yarıya sıralanmış bir grup veri olması durumunda eleman yeri değişimi
azdır.*/
/* Listedeki ilk elemanı al ve bu elemanı diğer elemanlar arasından en küçüğü ile
değiştir. Bu işlemi son elemana kadar tekrar et.*/

void selectionsort(int dizi[],int n)
{
    int i,j;
    int index, enkucuk;
    for(i=0;i<n-1;i++)
    {
        enkucuk=dizi[n-1];
        index=n-1;
        for(j=i;j<n-1;j++)
        {
            if(dizi[j]<enkucuk)
            {
                enkucuk=dizi[j];
                index=j;
            }
        }
        dizi[index]=dizi[i];
        dizi[i]=enkucuk;
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
    selectionsort(a,5);

    printf("selection sort işleminden sonra..\n");
    while(i<5)
    {
        printf("%d ",a[i]);
        i++;
    }

    return 0;
}