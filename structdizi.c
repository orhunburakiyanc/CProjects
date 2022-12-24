#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Struct kullanarak 5 tane nokta tutan bir dizi yarat
//her noktanin bir ismi olsun
//fonksiyon yardimiyla ekrana bastir

typedef struct {
    char nokta_adi[10];
    float xekseni;
    float yekseni;
}nokta;
void noktabastir(nokta p[] ,int x)   //typedef'le struct'a "nokta" adi konulmasaydi (struct nokta, int x) seklinde yazilacakti
{
    for(int a=0;a<x;a++)
    {
        printf("%s = (%1.f,%1.f)\n",p[a].nokta_adi,p[a].xekseni,p[a].yekseni);
    }
}
int main()
{
    nokta noktalar[5]={{"birinci",3,2},{"ikinci",5,2},{"ucuncu",7,9},{"dorduncu",3.4,5},{"besinci",1,6}};
    noktabastir(noktalar,5);
}
