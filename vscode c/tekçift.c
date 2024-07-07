
#include <stdio.h>
int main()
{
// girilen sayının tek mi çift me olduğunu yazdırmak
int a;
    printf("tek mi çift mi olduğunu öğrenmek istediğiniz bir sayı girin\n");
    scanf("%d", &a);
        if (a%2==0)
        {
            printf("girdiğin %d sayısı çifttir", a);
        }
        else 
        {
            printf("girdiğin %d sayısı tektir", a);
        }



return 0;
}