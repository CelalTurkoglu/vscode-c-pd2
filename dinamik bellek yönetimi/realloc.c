#include <stdio.h>
#include <stdlib.h>
//dinamik bellek yönetimi
//realloc kullanımı için bir örnek
//daha önceden malloc ya da calloc ile ayırdığımız yeri güncellemek için kullanılır.
//stdlib kütüphanesi olmadan bu fonksiyonlar çalışmaz
//ptr=realloc(ptr,n*sizeof(int)); şeklinde yazılır

int main()
{
  int *ptr;
  int n;
  n=5;
  int i;
  printf("Girdigimiz sayi degeri %d\n",n);

  ptr=(int*)calloc(n,sizeof(int));

  if(ptr==NULL)
  {
      printf("Hafiza bolunmedi\n");
      exit(0);
  }
  else
  {
      for(i=0;i<n;i++)
      {
          ptr[i]=i+1;
      }

      printf("Elemanlarim\n");
      for(i=0;i<n;i++)
      {
          printf("%d, ",ptr[i]);
      }
      printf("\n");
      n=10;
      printf("Girdigimiz sayi degeri %d\n",n);

      ptr=realloc(ptr,n*sizeof(int));
      printf("Bellek basarili bir sekilde tekrar ayrildi\n");
      for(i=5;i<n;i++)
      {
          ptr[i]=i+1;
      }

      printf("Elemanlarim\n");
      for(i=0;i<n;i++)
      {
          printf("%d, ",ptr[i]);
      }
      free(ptr);

  }
    return 0;
}
