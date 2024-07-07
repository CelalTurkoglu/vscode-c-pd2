#include <stdio.h>
#include <stdlib.h>

int main()
{ //2 adet 2 boyutlu dizinin elemanlarının toplanıp 3. diziye yazılması
    int dizi1[3][4]={{1,2,3,4},{2,4,12,4},{3,9,9,8}};
    int dizi2[3][4]={{8,6,3,5},{9,5,1,4},{3,3,9,4}};
    int toplam[3][4];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%6d", toplam[i][j]);

        }
        printf("\n");
    }







    return 0;
}