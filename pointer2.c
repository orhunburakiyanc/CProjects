#include <stdio.h>
#include <stdlib.h>
//karakter dizisinin icerisinden istedigin karakteri sil
//pointerla bu islemi yap
int main()
{
    char dizi[100];
    char *p;
    char silme;
    printf("Please write a sentence which has at least 2 words !!\n");
    gets(dizi);
    printf("Now please select a character that you want to delete it\n");
    scanf("%c",&silme);
    printf("--New serie--\n");
    for(p=dizi;*p;p++)
    {
        if(silme==*p)
        {
            continue;
        }
        printf("%c",*p);
    }

}
