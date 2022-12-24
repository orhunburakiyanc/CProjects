#include <stdio.h>
#include <stdlib.h>
typedef enum {
    ocak=1,
    subat,
    mart,
    nisan,
    mayis,
    haziran,
    temmuz,
    agustos,
    eylul,
    ekim,
    kasim,
aralik}aylar;
//aylar burada enum oldu neden cunku typedef kullanarak enum{...} tipini aylara esitledik ki artik "aylar" enumu temsil ediyor

void ayi_bastir(aylar ay)    //Burak bir enum oldugu icin basina enum(aylar) yazdik !!
{
    switch(ay)
    {
        case ocak :    printf("ocak");                          // belki suan soruyor olabilirsin "ay" burada bir integer degerini tekabul etmiyor mu?
        break;
        case subat :    printf("subat");                        // evet dogru fakat enum oldugu icin bilgisayar bu yazilan kelimeleri direk o integerla
        break;                                                  // esdeger goruyor ki bu yuzden case'lere "1,2,3..." sayilari yerine kelimeleri yazdim
        case mart :    printf("mart");                          // 1,2,3... yazsaydin yine ayni sey olurdu fark etmezdi.
        break;                                                  // Bildigimiz karakter dizisi degil anlayacagin uzere bildigimiz birer integer degerleri.
        case nisan :    printf("nisan");
        break;
        case mayis :    printf("mayis");
        break;
        case haziran :    printf("haziran");
        break;
        case temmuz :    printf("temmuz");
        break;
        case agustos :    printf("agustos");
        break;
        case eylul :    printf("eylul");
        break;
        case ekim :    printf("ekim");
        break;
        case kasim :    printf("kasim");
        break;
        case aralik :    printf("aralik");
        break;
        default : printf("boyle bir ay yok");
        break;
    }

}
int main()
{
 aylar burak=aralik;
 ayi_bastir(burak);
}
