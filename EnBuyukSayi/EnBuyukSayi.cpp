#include <stdio.h>
// girilen 10 adet sayının en büyüğünün kaçıncı sayı olduğunu bulan algoritmayı yazınız
int main(){
    int sayi[10], enBuyuk = 0, i = 0, sira;
    while(i < 10){
        printf("Lutfen %d. Sayiyi Giriniz: ",i+1);
        scanf("%d",&sayi[i]);
        if (sayi[i] > enBuyuk)
        {
            enBuyuk = sayi[i];
            sira = i+1;
        }
        i++;
    }
    printf("Girilen En Buyuk ve %d. Sayi %d\n",sira,enBuyuk);
    
    return 0;
    
}