/*Bir buz pateni karþýlaþmasýnda,bir yarýþmacýnýn performansý 6.00 üzerinden puanlanarak 10 hakem tarafýndan
    deðerlendirilmektedir.Yarýþmacýnýn performans puaný ise hakemlerin vermiþ olduðu en düþük ve en yüksek puan
    atýlýp,geri kalan puanlarýn aritmetik ortlamasý alýnarak bulunmaktadýr.Yazacaðýnýz programda yarýþmacýnýn
    adý,soyadý performans puanýný hesaplayýp ekranda görüntüleyiniz.Performans hesaplamasýný tek parametreli
    bir fonksiyonda yapýnýz.Bu fonksiyon yarýþmacýya ait yapýyý parametre olarak almalý ve performans puanýný
    hesaplayarak geri döndürmelidir.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //NOT !!= STRUCT'A YAZDDIGIN DESGÝSKENLERÝ BÝR DEGERE ESÝTLERSEN AYVAYÝ YERSÝN
typedef struct {
    char adi[10],soyad[10];
    int puan,hakem[10];
}bilgiler;

int puanhesapla(bilgiler x)
{
    x.puan=0;
    int p,max,min,sonuc;
    printf("Please write the judge's points==>THE MAX GIVEABLE POINT IS 6<==\n");
    for(p=0,max=x.hakem[0],min=0;p<10;p++)
    {
        do{
        printf("****Judge-%d=",p+1);
        scanf("%d",&x.hakem[p]);
        }while(x.hakem[p]>6);
    }
    for(p=0,max=x.hakem[0],min=0;p<10;p++)
    {
        if(max<x.hakem[p])
        {
            max=x.hakem[p];
        }
        if(min>x.hakem[p])
        {
            min=x.hakem[p];
        }
        x.puan+=x.hakem[p];
    }
    sonuc=(x.puan-min-max)/8;
    return sonuc;
}

int main()
{
    int sonuc;
    bilgiler yarismaci1;
    sonuc=puanhesapla(yarismaci1);
    printf("\nYarismacinin Adi = %s\nYarismacinin Soyadi = %s\n",strcpy(yarismaci1.adi,"Burak"),strcpy(yarismaci1.soyad,"Kiyanc"));
    printf("Yarismacinin Puani = %d",sonuc);
}

