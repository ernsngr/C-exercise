// kullanıcıdan bir sayı al
// sayının asal olup olmadığını kontrol et 
// ekrana girilen sayıyı ve asal olup olmadığını yazdır
// değişkenlerden birisis bool olacak
#include <stdio.h>
using namespace std;

int main(){
    int sayi;
    bool asal;

    printf("Lutfen Sayi Giriniz:");
    scanf("%d",&sayi);

    while(sayi < 0){
        printf("!Lutfen pozitif sayi giriniz!");
        scanf("%d",&sayi);
    }
    if(sayi == 1 || sayi == 0){
       asal = false;
    }
    else if(sayi == 2){
        asal = true;
    }
    else{
        for(int i = 2; i < sayi; i++){
        if(sayi % i == 0){
            asal = false;
            break;
        } 
        else{
            asal = true;
        }
    }
    }
    // switch(asal){
    //     case true:
    //         printf("%d sayisi asaldır\n",sayi);
    //     break;
    //     case false:
    //         printf("%d sayisi asal degildir",sayi);
    //     break;
    // }

    if(asal)
        printf("%d sayisi asaldır\n",sayi);

    else{
        printf("%d sayisi asal degildir",sayi);
    }
    
    
    
    
    
    
    
    return 0;
}