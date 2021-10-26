#include <stdio.h>
using namespace std;

// 1 -> sınıf mevcudunu ogren
// 2 -> sınıf mevcudu kadar ogrencinin yasını al (dizi kullan)
// 3 -> yas ortalaması hesapla (döngü içinde mi kullanmalıyım döngü dışında mı?)
// ekrana yazdır

int main(){

   int mevcut,yas[mevcut],ort,i = 0;

   printf("Lutfen Sinif Mevcudunu Giriniz :");
   scanf("%d", &mevcut);

   while(i < mevcut)
   {
      printf("Lutfen %d. Ogrencinin Yasını Giriniz :",i+1);
      scanf("%d", &yas[i]);
      i += 1;
   }
      i = 0;
      while (i < mevcut)
      {
         printf("%d. ogrencinin yasi: %d \n",i+1,yas[i]);
         i++;
      }
      
      i = 0;
      while (i < mevcut) 
      {
         ort = ort + yas[i];
         i++; 
      }
         ort = ort / mevcut;

    printf("Sinifin Yas ortalaması :%d",ort);



   return 0;
}
