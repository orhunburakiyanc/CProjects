#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* word: canan
c
c a
c a n
c a n a
c a n a n */

int main()
{
    char word[100];
    int number;
    int i=0;
    printf("Please enter a word: ");
    gets(word);
    while(word[i])
    {
        sayi=i;
            for(i=0;i<=sayi;i++)
            {
              printf("%c ",word[i]);
            }
        printf("\n");
    }
}

