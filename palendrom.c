#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cumle[50],terscumle[50];
//Task 1- Kullaniciya karakter dizisini girdiren bir fonk gir
//Task 2- Kullanicinin girdigi karakter dizisinin kac karakter oldugunu bulan fonk yaz
//Task 3- Karakter dizisinin bosluklarini kaldiran bir fonksiyon yaz
//Task 4- karakterlerin yerlerini sondan basa dogru yer degistrien bir fonk yaz
//Task 5- Palendrom fonk yaz, eger palendromsa 1 gondersin, degilse 0
/*Onemli Notlar : olusturdugun bu void fonksiyonlarinin icerisindeki if sartlarini okumadi intex(mantik)
hatasi verdi c programinin bazen yaptigi sey ben de 32 yazacagima ' ' yazdim ki boslugu tanimlasin sonra hata duzeldi.*/
// do while dongusunu yazarken nasil yazildigina dikkat et !! while'in sonuna noktali virgul koymayi unuttun
// global bir degisken atadigin zaman mainin icerisine ya da olusturdugun bir fonksiyonun icerisine o degiskeni tanitmak zorunda degilsin

void bosluksuz ()
{
    int a=0;
    printf("Bosluksuz===> ");
    do
     {
         if(cumle[a]==' ')
         {
             a++;
         }
         printf("%c",cumle[a]);
         a++;
     }while(cumle[a]);
     printf("\n");
}
void bastansona ()
{
    int a=0;
    printf("Sondan Basa===> ");
    while(cumle[a])
     {
         a++;
     }
     a--;
     for(int i=0;a>=0;a--)
     {
         terscumle[i]=cumle[a];
         printf("%c",cumle[a]);
         i++;
     }
     printf("\n");
}
void palendrom()
{
    int a=0;
    int x=1;
    while(cumle[a])
    {
        if(cumle[a]==terscumle[a])
        {
            a++;
        }
        else
        {

            x=0;
            printf("Palendrom degil ==> '0' <==");
            break;
        }
    }
    if(x)
    {
        printf("Palendromdur ==> '1' <==");
    }
}
int main()
{
    int i=0;
    int bosluk=0;
    printf("Please write a sentence which has at least 2 words\n=>");
    gets(cumle);
    /*Boslukbulma*/
    while(cumle[i])
    {
        i++;
      if(cumle[i]==32)
      {
        bosluk++;
      }
    }
     printf("Bosluk Sayisi => %d\n",bosluk);
     printf("Karakter Sayisi => %d\n\n",i-bosluk);
     bosluksuz();
     bastansona();
     palendrom();

}
