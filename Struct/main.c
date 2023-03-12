#include <stdio.h>
#include <string.h>

struct adresBilgileri{
    char sehir[20];
    char ilce[20];
    char postaKodu[20];
};

struct kisiBilgileri{
    char isim[20];
    char soyisim[20];
    char no[10];
    float notOrt;
    struct adresBilgileri adres;
};





int main() {
    printf("Hazirlayan: Doganay Balaban -- 1220505057");
    struct kisiBilgileri kisi1;
    strcpy(kisi1.isim,"Doganay");
    strcpy(kisi1.soyisim,"Balaban");
    strcpy(kisi1.no,"1220505057");
    kisi1.notOrt = 3.12;
    strcpy(kisi1.adres.sehir,"Istanbul");
    strcpy(kisi1.adres.ilce,"Kucukcekmece");
    strcpy(kisi1.adres.postaKodu,"34290");
    printf("\n\nIsim :%s,\nSoyisim :%s,\nOgrenci No :%s,\nNot Ortalamasi :%.2f, \nOturdugu Il :%s, \nOturdugu Ilce :%s, \nPosta Kodu :%s",kisi1.isim,kisi1.soyisim,kisi1.no,kisi1.notOrt,kisi1.adres.sehir,kisi1.adres.ilce,kisi1.adres.postaKodu);

    struct kisiBilgileri kisi2;
    strcpy(kisi2.isim,"Eda Nur");
    strcpy(kisi2.soyisim,"Ergin");
    strcpy(kisi2.no,"1220505015");
    kisi2.notOrt = 3.05;
    strcpy(kisi2.adres.sehir,"Istanbul");
    strcpy(kisi2.adres.ilce,"Kartal");
    strcpy(kisi2.adres.postaKodu,"34870");
    printf("\n\nIsim :%s,\nSoyisim :%s,\nOgrenci No :%s,\nNot Ortalamasi :%.2f, \nOturdugu Il :%s, \nOturdugu Ilce :%s, \nPosta Kodu :%s",kisi2.isim,kisi2.soyisim,kisi2.no,kisi2.notOrt,kisi2.adres.sehir,kisi2.adres.ilce,kisi2.adres.postaKodu);

    struct kisiBilgileri kisi3;
    strcpy(kisi3.isim,"Elif");
    strcpy(kisi3.soyisim,"Barlik");
    strcpy(kisi3.no,"1220505023");
    kisi3.notOrt = 3.12;
    strcpy(kisi3.adres.sehir,"Istanbul");
    strcpy(kisi3.adres.ilce,"Esenyurt");
    strcpy(kisi3.adres.postaKodu,"34517");
    printf("\n\nIsim :%s,\nSoyisim :%s,\nOgrenci No :%s,\nNot Ortalamasi :%.2f, \nOturdugu Il :%s, \nOturdugu Ilce :%s, \nPosta Kodu :%s",kisi3.isim,kisi3.soyisim,kisi3.no,kisi3.notOrt,kisi3.adres.sehir,kisi3.adres.ilce,kisi3.adres.postaKodu);

    struct kisiBilgileri kisi4;
    strcpy(kisi4.isim,"Esma Nur");
    strcpy(kisi4.soyisim,"Gokkaya");
    strcpy(kisi4.no,"1220505023");
    kisi4.notOrt = 3.12;
    strcpy(kisi4.adres.sehir,"Istanbul");
    strcpy(kisi4.adres.ilce,"Bagcilar");
    strcpy(kisi4.adres.postaKodu,"34200");
    printf("\n\nIsim :%s,\nSoyisim :%s,\nOgrenci No :%s,\nNot Ortalamasi :%.2f, \nOturdugu Il :%s, \nOturdugu Ilce :%s, \nPosta Kodu :%s",kisi4.isim,kisi4.soyisim,kisi4.no,kisi4.notOrt,kisi4.adres.sehir,kisi4.adres.ilce,kisi4.adres.postaKodu);

    struct kisiBilgileri kisi5;
    strcpy(kisi5.isim,"Zeynep");
    strcpy(kisi5.soyisim,"Uguz");
    strcpy(kisi5.no,"1220505023");
    kisi5.notOrt = 3.12;
    strcpy(kisi5.adres.sehir,"Kocaeli");
    strcpy(kisi5.adres.ilce,"Gebze");
    strcpy(kisi5.adres.postaKodu,"41400");
    printf("\n\nIsim :%s,\nSoyisim :%s,\nOgrenci No :%s,\nNot Ortalamasi :%.2f, \nOturdugu Il :%s, \nOturdugu Ilce :%s, \nPosta Kodu :%s\n",kisi5.isim,kisi5.soyisim,kisi5.no,kisi5.notOrt,kisi5.adres.sehir,kisi5.adres.ilce,kisi5.adres.postaKodu);
    return 0;
}
