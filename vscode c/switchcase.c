
#include <stdio.h>
int main()
{
int day=5;
// switch-case if-else if-else yerine kullanılabilir, her caseden sonra break yazılır ve default else gibi kullanılır.
// switch'in içine değişkenin adı yazılır.
switch(day)
{
    case 1:printf("pazartesi");
    break;
    case 2: printf("salı");
    break;
    case 3: printf("çarşamba");
    break;
    case 4: printf("perşembe");
    break;
    case 5: printf("cuma");
    break;
    case 6: printf("cumartesi");
    break;
    case 7: printf("pazar");
    break;
    default: printf("geçersiz gün");
    break;



}









return 0;
}