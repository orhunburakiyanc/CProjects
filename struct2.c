#include <stdio.h>
#include <stdlib.h>
#include <string.h> //NOT !!= STRUCT'A YAZDDIGIN DESGÝSKENLERÝ BÝR DEGERE ESÝTLERSEN AYVAYÝ YERSÝN
// ek soru == yarismaci sayisini gireceksin ve herbirinin adlarini , soyadlarini , puanlarini belirleyeceksin
typedef struct {
    char adi[10],soyad[10];
    int puan,hakem[100];                                                //DONE !!!!
}bilgiler;


int puanhesapla(bilgiler x[],int n)
{
    int j,p,a;
    int max=6;
    int min=0;

    printf("Please write skaters' names and surnames!!   ==>THE MAX GIVEABLE POINT IS 6<==\n");
    for(j=0;j<n;j++)
    {
      //AD VE SOYAD
      printf("%d. Skater's name =",j+1);
      scanf("%s",x[j].adi);
      printf("Skater's surname =");
      scanf("%s",x[j].soyad);

      //HAKEMLER TARAFINDAN J. SKATER'A VERÝLEN PUANLAR
      printf("    --- %d. Skater {points} ---\n",j+1);
      for(p=0;p<10;p++)
        {
            do{
            printf("\t\t\t\t\tJudge-%d=",p+1);     //HAKEMLERIN PUANLARINI VERME
            scanf("%d",&x[j].hakem[p]);
            }while(x[j].hakem[p]>6);
        }

        //MIN MAX
        x[j].puan=0;
      for(p=0;p<10;p++)
        {
        if(max<x[j].hakem[p])
            {
            max=x[j].hakem[p];
            }
        if(min>x[j].hakem[p])
            {
            min=x[j].hakem[p];
            }
        x[j].puan+=x[j].hakem[p];
        }

        //Arithmetic average
      x[j].puan=(x[j].puan-min-max)/8;
    }


    //EN FAZLA PUANA SAHIP SKATER
    int birinci,b;
    char *f[1];
    char *g[1];
    for(j=0;j<n;j++)
    {
        for(b=0;b<n;b++)
            {
        if(x[j].puan<x[b].puan){
            birinci=x[b].puan;
             f[0]=x[b].adi;
             g[0]=x[b].soyad;
        }
        else if(x[j].puan>x[b].puan){
            birinci=x[j].puan;
            f[0]=x[j].adi;
            g[0]=x[j].soyad;
        }
            }
    }
    printf("\n\n\n**FIRST SKATER**\nName = %s\nSurname = %s",f[0],g[0]);
    return birinci;
}

int main()
{
    int sonuc,n;
    printf("How many competitor is in this race ?? \n");
    scanf("%d",&n);
    bilgiler yarismacilar[n];
    sonuc=puanhesapla(yarismacilar,n);
    printf("\nPoint = %d",sonuc);

}

