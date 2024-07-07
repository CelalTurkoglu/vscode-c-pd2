#include <stdio.h>
#include <stdlib.h>
// Bubble Sort algoritmasını uygulayan fonksiyon
// fonksiyon olarakta bu şekilde yazılır
//Algoritmanın tasarımı kolaydır ancak algoritma verimli değildir.
/*Az sayıda eleman üzerinde ya da çoğu elemanı zaten sıralanmış listeler
üzerinde kullanılabilir.*/
void bubblesort(int dizi[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        // Son i öğe zaten sıralı olduğundan onları atlıyoruz
        for (j = 0; j < n-i-1; j++) {
            // Bitşik öğeleri karşılaştır ve gerektiğinde yer değiştir
            if (dizi[j] > dizi[j+1]) {
                // dizi[j] ve dizi[j+1] değiştir
                int gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }
}
int main()
{
    int N;
    int i,j,gecici;
    printf("kaç adet sayi üretilecek\n");
    scanf("%d", &N);
    int dizi[N];
    printf("dizi elemanları\n");

    for(i=0;i<N;i++)
    {
        scanf("%d",&dizi[i]);
    }

    printf("dizi elemanları\n");
    for(i=0;i<N;i++)
    {
        printf("%d\n", dizi[i]);
    }

    for(i=0;i<(N-1);i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;

            } 
        }
    }

    printf("\n sıralanmış dizi elemanları:\n");
    
    for(i=0;i<N;i++)
    {
        printf("%d\t",dizi[i]);
    }



    return 0;
}