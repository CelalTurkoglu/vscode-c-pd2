
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("%d\t %d\t %d\t\n", 'a','b','c'); // (/t tab kadar boşluk bırakır), bu şekilde asci tablosundaki sıraları yazdırılır


//

    int i;
    
    for(i='a';i<='z';i++) // bu şekilde alfabeyi asci tablosundan yazdırabiliriz.
    {
        printf("%c\n",i);
    }






    return 0;
}
