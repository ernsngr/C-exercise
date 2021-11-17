#include <stdio.h>
// girilen 10 adet sayının en büyüğünün kaçıncı sayı olduğunu bulan algoritmayı yazınız
int main(){
    int sayi[10], i = 0;
    
    while(i < 10){
        printf("Lutfen %d. Sayiyi Giriniz :",i+1);
        scanf("%d",&sayi[i]);
        i++;
    }
    i = 0;
    int EnBuyuk = sayi[i], sayac = 0;
    while(i < 10){
        if(sayi[i] > EnBuyuk){
            EnBuyuk = sayi[i];
            sayac = i;
        }
        i++;
    }
    printf("En Buyuk sayi :%d\n",EnBuyuk);
    printf("İndis Numarası %d",sayac);
    
    
    return 0;
    
}