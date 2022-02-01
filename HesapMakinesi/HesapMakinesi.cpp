#include <stdio.h>
int toplam(int sayi1, int sayi2)
{
  return sayi1 + sayi2;
}
int cikarma(int sayi1, int sayi2)
{
  return sayi1 - sayi2;
}
int carpma(int sayi1, int sayi2)
{
  return sayi1 * sayi2;
}
int bolme(int sayi1, int sayi2)
{
  return sayi1 / sayi2;
}
int main()
{
  int sayi1, sayi2, secim;
  printf("Lutfen Islem Seciniz; \nToplama -> 1 \n Cıkartma -> 2 \n Carpma -> 3 \n Bolme -> 4 \n");
  scanf("%d", &secim);
  if(secim > 4){
     printf("!!!Belirtilen Değerlerden Birini Giriniz!!!\n");
    return main();
  }
  printf("Lutfen 1. Sayiyi Giriniz: ");
  scanf("%d",&sayi1);
  printf("Lutfen 2. Sayiyi Giriniz: ");
  scanf("%d",&sayi2);
  if (secim == 1)
  {
    printf("Toplama isleminin sonucu: %d", toplam(sayi1, sayi2));
  }
  else if (secim == 2)
  {
    printf("Cıkartma isleminin sonucu: %d", cikarma(sayi1, sayi2));
  }
  else if (secim == 3)
  {
    printf("Carpma isleminin sonucu: %d", carpma(sayi1, sayi2));
  }
  else if (secim == 4)
  {
    printf("Bolme isleminin sonucu: %d", bolme(sayi1, sayi2));
  }
  
  return 0;
}
