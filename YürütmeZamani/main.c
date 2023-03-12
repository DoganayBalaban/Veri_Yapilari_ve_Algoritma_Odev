#include <stdio.h>

int minBul(int dizi[], int boyut){
    int min = dizi[0];               //1.satır
    int i;                           //2.satır
    for (i = 1; i < boyut; ++i) {    //3.satır
        if(dizi[i] < min){           //4.satır
            min = dizi[i];           //5.satır
        }                            //6.satır
    }                                //7.satır
    return min;                      //8.satır
}                                    //9.satır
/* 1.satırda 1 işlem,
 * 3.satırda 1, n, (n-1) işlem,
4.satırda (n-1) işlem,
 5.satırda (n-1) işlem,
 8.satırda 1 işlem.
 Toplam T(n) = 4n  */


int main() {
    printf("Hazirlayan : Doganay Balaban -- 1220505057");
    int dizi[] ={5,7,2,3,6, 1};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    int min = minBul(dizi,boyut);
    printf("Dizinin en kucuk elemani : %d",min);
    return 0;
}
