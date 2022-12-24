/*Bir öðretmen 30 kiþilik sýnýfa 10 soruluk çoktan seçmeli sorulardan oluþan bir sýnav vermiþtir.
    Bu sýnavda her sorunun 4 þýkký(A B C D) bulunmakta ve 4 yanlýþ bir doðruyu götürmektedir.Bu programda
    bir öðrencinin okul numarasýný ve cevaplarýný içeren bir yapý tanýmlayýnýz ve sýnýfta bulunan her öðrencinin
    okul numarasýný ve cevaplarýný bu yapý dizisine okutunuz.Daha sonra öðretmenin hazýrladýðý cevap anahtarýný
    bir karakter dizisine okuyunuz ve her öðrencinin 10 üzerinden aldýðý notu hesaplayýnýz.Her öðrencinin okul numarasý
    ile,hesaplanan sýnav sonucunu bir baþka yapý dizisinde tutunuz ve sonuçlarý ekranda görüntüleyiniz.*/
#include <stdio.h>
#include <stdlib.h>
typedef union{
    int okul_numarasi;
    char cevaplar[10];
    int sonuc;
}ogrencibilgi;

void cevapislemleri(ogrencibilgi x[5])
{
    srand(time(0));
    printf("----Please Enter the students' answers----\n");
    printf(">Students' number will be determining by the computer!!\n\n");
    for(int a=0;a<5;a++)
    {
        printf("*** Student %d  *** \n\n",a+1);
        x[a].okul_numarasi=rand()%100;
        for(int b=0;b<10;b++)
        {
            printf("%d-",b+1);
            scanf("%s",&x[a].cevaplar[b]);
        }
    }

}
void kontrolfonk(ogrencibilgi x[5],char cvpanhtr[10])
{
    int dogru,yanlis;
    for(int b=0;b<5;b++)
    {
        printf("\n\n*** Student %d , School number = %d *** \n\n",b+1,x[b].okul_numarasi);
        for(int a=0;a<10;a++)
        {
            if(x[b].cevaplar[a]==cvpanhtr[a])
            {
                printf("Question %d = CORRECT + \n",a+1);
                dogru++;
            }
            else
            {
                printf("Question %d = WRONG - \n",a+1);
                yanlis++;
                if(yanlis%4==0)
                {
                    dogru--;
                }                                                   // THE PROBLEM OCCUR WITH
            }

        }
        x[b].sonuc=dogru;
        dogru=0;
        yanlis=0;
    }
    printf("\n");
    for(int k=0;k<5;k++)
        {
            printf("Student %d has %d/10 points !!\n",k+1,x[k].sonuc);
        }

}

int main()
{
    char cevap_anahtari[]="ABBDCADCDB";
    ogrencibilgi ogrenci[5];
    printf("Please determine of the questions' answers \n\n");
    cevapislemleri(ogrenci);
    kontrolfonk(ogrenci,cevap_anahtari);
}
