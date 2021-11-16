#include <stdio.h>

int main(){

    int hSayi, tSayi;
    printf("Lutfen Hedef Sayiyi Giriniz: ");
    scanf("%d",&hSayi);
    printf("!!!Oyun Başladı!!!");
    printf("!!! Birinci Kullanıcının Girdigi Sayiyi Tahmin Et !!!");
    scanf("%d",&tSayi);

    while(tSayi < hSayi){
        printf("!Daha Büyük Bir Sayi Gir!");
        scanf("%d",&tSayi);
    }
    while(tSayi > hSayi){
        printf("!Daha Küçük Bir Sayi Gir!");
        scanf("%d",&tSayi);
    }
    if(tSayi == hSayi)
        printf("!!! Tebrikler Doğru Tahmin !!!");
    
    
    
    
    return 0;
}