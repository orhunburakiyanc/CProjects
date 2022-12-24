#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fibonacci[30];
    int user;
    printf("Write a number\n\n->");
    scanf("%d",&user);
    fibonacci[0]=1;
    fibonacci[1]=1;
    printf("\n******************************\n\n\t----FIBONACCI----\n\n");
    printf("%d\t%d",fibonacci[0],fibonacci[1]);
    for(int x=0;x<user;x++)
    {
        fibonacci[x+2]=fibonacci[x]+fibonacci[x+1];
        printf("\t%d ",fibonacci[x+2]);
    }

    printf("\n\n******************************");
}
