#include <stdio.h>
#include <stdlib.h>

// find the count of a digit

void basamaksayisi(int deger)
{
 int digit;
    int howmany=0;
    int resulttt=0;

    while(1)
    {
        digit=deger%10;
        deger=deger/10;
        resulttt=resulttt+digit;
        howmany++;
        if(deger==0)
        {
            break;
        }
    }
    printf("How many digit it has ?\n=%d",howmany);
    printf("\n\nWhat is the addition between the value's digits\n=%d",resulttt);
}



int main()
{
    int deger;
    printf("Please enter a value that doesn't matter how many digit it will be have \n->");
    scanf("%d",&deger);

    basamaksayisi(deger);
}
