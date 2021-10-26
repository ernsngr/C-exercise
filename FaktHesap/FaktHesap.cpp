#include <iostream>
using namespace std;

int main(){

   int faktöriyel = 1, sayi = 0 , i;
   
    printf("Lutfen Sayi Giriniz :");
    scanf("%d", &sayi);

    if(sayi > 0){
        for (int i = 1; i <= sayi ; i++){
        faktöriyel *= i;
    }
    printf("Sonuc :%d",faktöriyel);
    }

    if(sayi < 0){
       printf("Lutfen Pozitif Sayi Giriniz:\n");
    }
    
    
    return 0;
}