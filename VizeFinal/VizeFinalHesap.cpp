#include <stdio.h>

// 5 ogrencinin vize 1 - vize 2 - ve final sınav notlarının ortalamasını hesaplayan program
// 2D array kullanılacak // satır-sütun mantigi
// girilen her bir not 0-100 araliginda olacak
// ders notu eger ondalikli sayi ise , den sonraki iki basamak gösterilecek

int main(){
    
    int sinif[5][3]; 
    float ortalama[5];

    printf("\tLutfen 0-100 Arasi Not Giriniz\n");
        for(int i = 0 ; i < 5; i += 1){
        printf("%d. ogrencinin ;\n",i+1);
        printf("Vize 1 Notu : ");
        scanf("%d",&sinif[i][0]); // sütunda 0. index vize 1 e 
        printf("Vize 2 Notu :");
        scanf("%d",&sinif[i][1]); // sütunda 1. index vize 2 ye 
        printf("Final Notu :");
        scanf("%d",&sinif[i][2]); // sütunda 2. index final e denk gelir    

        }
    
        for(int i = 0 ; i < 5 ; i += 1){
             if(sinif[i][0] > 0 & sinif[i][0] <= 100 & sinif[i][1] > 0 & sinif[i][1] <= 100 & sinif[i][2] > 0 & sinif[i][2] <= 100){
                 for(int i = 0 ; i < 5 ; i++){
                    ortalama[i] = (sinif[i][0] * 0.25) + (sinif[i][1] * 0.25) + (sinif[i][2] * 0.50);
                }
                 printf("%d. ogrencinin ortalaması : %.02f\n",i+1,ortalama[i]);
             }
             else{
                 printf("%d. Ogrencinin Notu Belirtilen Aralikta Degildir\n",i+1);
             }
        }

    
    
    
    
    return 0;
}