#include <stdio.h>
using namespace std;

int main(){
    int sayi;

    printf("1-7 arasi bir sayi giriniz : ");
    scanf("%d",&sayi);

    switch (sayi)
    {
    case 1 :
        printf("\n   Haftanın %d. gunu Pazartesidir.\n\n",sayi);
            break;
    case 2 : 
        printf("\n   Haftanın %d. gunu Salıdır.\n\n",sayi); 
            break;
    case 3 : 
        printf("\n   Haftanın %d. gunu Carsambadır.\n\n",sayi);
            break;
    case 4 : 
        printf("\n   Haftanın %d. gunu Persembedir.\n\n",sayi);
            break;
    case 5 : 
        printf("\n   Haftanın1 %d. guun Cumadır.\n\n",sayi);
            break;
    case 6 : 
        printf("\n   Haftanın %d .gunu Cumartesidir.\n\n",sayi);
            break;
    case 7 : 
        printf("\n   Haftanın %d. gunu Pazardır.\n\n",sayi);
            break;
    
    default:
        printf("\n!!!Lutfen Belirtilen Aralikta Deger Giriniz!!!\n\n");
        break;
    }

    
    return 0;
}