#include <stdio.h>

// 5 ogrencinin vize 1 - vize 2 - ve final sınav notlarının ortalamasını hesaplayan program
// 2D array kullanılacak // satır-sütun mantigi
// girilen her bir not 0-100 araliginda olacak
// ders notu eger ondalikli sayi ise , den sonraki iki basamak gösterilecek

int main(){
    
int sinif[5][2]; 
float ortalama[5];

printf("\tLutfen 0-100 Arasi Not Giriniz\n");
for(int i = 0 ; i < 5; i += 1){
    printf("%d. ogrencinin ;\n",i+1);
    printf("Vize Notu : ");
    scanf("%d",&sinif[i][0]);
    while(sinif[i][0] < 0 || sinif[i][0] > 100){
        printf("Lutfen %d. Ogrencinin Vize Notunu Belirtilen Aralikta Giriniz: ",i+1);
        scanf("%d",&sinif[i][0]);
    }
    printf("Final Notu :");
    scanf("%d",&sinif[i][1]); 
    while(sinif[i][1] < 0 || sinif[i][1] > 100){
        printf("Lutfen %d. Ogrencinin Final Notunu Belirtilen Aralikta Giriniz: ",i+1);
        scanf("%d",&sinif[i][1]);
}

}
for (int i = 0; i < 5; i++){
    ortalama[i] = (sinif[i][0] * 0.4) + (sinif[i][1] * 0.6);
    printf("%d. Ogrencinin Donem Ortalaması : %.1f\n",i+1,ortalama[i]);
}

    return 0;
}