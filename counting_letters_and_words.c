#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char sentence[100];
    int number=0;
    int index=0;
    printf("Please enter a sentence:\n");
    gets(sentence);
    while(sentence[index])
    {
        if(sentence[index]==32)
        {
            number++;
        }
        index++;
    }
    printf("Word count : %d\n",number+1);
    printf("Letter count : %d\n",index-number);
    printf("%s",sentence);
}

