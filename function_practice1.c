#include <stdio.h>
#include <stdlib.h>

//write a program with functions that calculates basic calculations

int transactions(int x, int y, int z)
{
    switch(z)
    {
        case 1 : printf("Addition => %d\n\n",x+y);
                 printf("If u want proccess to stop please press '0' or want proccess to continue press '9'\n");
                 scanf("%d",&z);
        break;
        case 2 : printf("Subtraction => %d\n\n",x-y);
                 printf("If u want proccess to stop please press '0' or want proccess to continue press '9'\n");
                 scanf("%d",&z);
        break;
        case 3 : printf("Multiplication => %d\n\n",x*y);
                 printf("If u want proccess to stop please press '0' or want proccess to continue press '9'\n");
                 scanf("%d",&z);
        break;
        case 4 : printf("Division => %d\n\n",x/y);
                 printf("If u want proccess to stop please press '0' or want proccess to continue press '9'\n");
                 scanf("%d",&z);
        break;
    }
            return z;
}
int main()
{
    int number1,number2,islem;
    int is_transaction=9;
    printf("Please enter two integer\n=>");
    scanf("%d",&number1);
    printf("=>");
    scanf("%d",&number2);
    while(1)
    {
         if(is_transaction==0)
         {
             printf("\n\n===>>THE PROCCESS HAS BEEN STOPPED");
             break;
         }
         else if(is_transaction==9)
         {
             printf("\n\nNow select a transaction that u want\n\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n====>");
             scanf("%d",&islem);
         }
         is_transaction=transactions(number1,number2,islem);
    }

}
