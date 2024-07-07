#include <stdio.h>
#include <stdlib.h> //abs için gerekli
#include <math.h> //bazı matematik işlemleri için bunu dahil etmelisin.
int main()
{

    /*
      ceil floor sqrt pow abs
    */
        printf("%f\n", ceil(4.3)); // tavana yuvarlar
        printf("%f\n", floor(4.3)); // tabana yuvarlar
        printf("%f\n", sqrt(49)); // karakök işlemi yapar
        printf("%f\n", pow(2,5)); // üslü sayı işlemlerini yapar
        printf("%d\n", abs(-23)); // girilen sayının 0'a olan uzaklığını yazar, negatif sayıyı pozitife çevirmek için de kullanılabilir. (%d ile kullanılır) mutlak değer


    return 0;
}