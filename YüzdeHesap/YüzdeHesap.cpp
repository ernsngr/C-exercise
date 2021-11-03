#include <stdio.h>
// Girilen Sayının alınması istenen yüzdesini hesaplayan ve ekrana yazdıran program

int main(){
    
    int sayi,yüzde,hesap;

    printf("Lutfen Yuzdesi Alinacak Sayiyi Giriniz: ");
    scanf("%d",&sayi);
    printf("Alinacak Yüzdeyi Giriniz: ");
    scanf("%d",&yüzde);
    while(yüzde > 100 || yüzde < 0){
        printf("Lutfen 0-100 Arasi Bir Deger Giriniz: ");
        scanf("%d",&yüzde);
    }

    hesap = sayi * yüzde / 100;
    printf("Sonuc :%d",hesap);

    
    
    return 0;
}