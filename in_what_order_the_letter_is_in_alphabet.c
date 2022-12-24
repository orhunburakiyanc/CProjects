#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ch;
    int sira;
    printf("Bir karakter giriniz\n=>");
    scanf("%c",&ch);
    if(((int)ch>='A')&&((int)ch<='Z'))   /*if icerisinde illa (int) yazmana gerek yok. Asagidaki gibi bir esitlik oldugu zaman (int) yazmak zorundasin cunku asci'deki deger karsiligini yazmak istiyorsun*/
    {
        sira=(int)ch-(int)'A'+1;
    }
    else if((ch>='a')&&(ch<='z'))
    {
        sira=(int)ch-(int)'a'+1;
    }
    else
    {
        printf("Boyle bir sey yok ");
    }
    printf("%d.sirada",sira);
}
