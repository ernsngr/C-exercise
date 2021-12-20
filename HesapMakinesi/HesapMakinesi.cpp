#include <stdio.h>
int toplam(int sayi1, int sayi2);
int cikarma(int sayi1,int sayi2);
int carpma(int sayi1,int sayi2);
int bolme(int sayi1,int sayi2);
int main(){
  int sayi1,sayi2,secim;
  printf("Lutfen Islem Seciniz; \nToplama -> 1 \n Cıkartma -> 2 \n Carpma -> 3 \n Bolme -> 4 \n");
  scanf("%d",&secim);
  printf("Lutfen 1. Sayiyi Giriniz: ");
  scanf("%d",&sayi1);
  printf("Lutfen 2. Sayiyi Giriniz: ");
  scanf("%d",&sayi2);
  if(secim == 1){
    printf("Toplama isleminin sonucu: %d",toplam(sayi1,sayi2));
  }
  else if(secim == 2){
    printf("Cıkartma isleminin sonucu: %d",cikarma(sayi1,sayi2));
  }
  else if(secim == 3){
    printf("Carpma isleminin sonucu: %d",carpma(sayi1,sayi2));
  }
  else if(secim == 4){
    printf("Bolme isleminin sonucu: %d",bolme(sayi1,sayi2));
  }
  return 0;
}
int toplam(int sayi1,int sayi2){
  int topl;
  topl = sayi1 + sayi2;
  return topl;
}
int cikarma(int sayi1,int sayi2){
  int cikar;
  cikar = sayi1 - sayi2;
  return cikar;
}
int carpma(int sayi1,int sayi2){
  int carp;
  carp = sayi1 * sayi2;
  return carp;
}
int bolme(int sayi1,int sayi2){
  int bolm;
  bolm = sayi1 / sayi2;
  return bolm;
}
