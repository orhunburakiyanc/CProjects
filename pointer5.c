#include <stdio.h>
#include <stdlib.h>
int main()
{
     char *gun[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};  //Normalde gun[7][10] seklinde yazmamiz gerekirken "*" yazdigimiz icin [10]'u yazmamiza gerek kalmiyor
     int i;
     printf("Enter a number between 1-7\n");
     do
     {
         scanf("%d",&i);
     }while(i<1 || i>7);
     printf("%s\n",gun[i-1]);
     printf("%c\t",gun[1][1]);
     printf("%s\t",*gun[1]);  //bastirmaz cunku %s yazdin %c yazarsan basar
     printf("%c",*gun[1]);
}
