#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Kullanicidan karakter dizisi girmesini iste kac karakter oldugunu da ekrana yazdirin
int main()
{
   char dizi[100];
   char *p;
   printf("Please write something that has at least two word\n");
   gets(dizi);
   int x=0;
   int bosluk=0;
   for(p=dizi;*p;p++)
   {
       if(*p==32)
       {
            bosluk++;
       }
        x++;
   }
   printf("has %d letters",x-bosluk);

}
