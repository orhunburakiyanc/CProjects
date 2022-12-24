#include <string.h>
#include <stdlib.h>

void transactions(int x, int y, int z)
{
    switch(x)
    {
          case 1 :  printf("Addition = %d\n",addition(y,z));
        break;
          case 2 : printf("Subtraction = %d\n",subtract(y,z));
        break;
          case 3 :  printf("Multiplication = %d\n",multiplication(y,z));
        break;
          case 4 :  printf("Division = %d",division(y,z));
        break;
    }
}

int addition(int m, int n)
{
    return m+n;
}
int subtract(int m , int n)
{
    return m-n;
}
int division(int m , int n)
{
    return m/n;
}
int multiplication(int m , int n)
{
    return m*n;
}
int main()
{
    int transaction;
    int first;
    int second;
    printf("CACULATOR\n\n");
    printf("Which transaction you want to choose ?\n");
    printf("1---->Addition\n2---->Subtraction\n3---->Multiplication\n4---->Division\n------->>");
    while(1)
    {
    scanf("%d",&transaction);
    printf("First number=>");
    scanf("%d", &first);
    printf("Second number=>");
    scanf("%d", &second);
    transactions(transaction,first,second);
    printf("Which transaction you want to choose ?\n");
    }

}

