#include <stdio.h>
#include <stdlib.h>
int main()
{
    int fibonacci[500];
    int usermax;
    printf("Write a number that determine the ending of fibonacci serie ==>\t");
    scanf("%d",&usermax);
    fibonacci[0]=1;
    fibonacci[1]=1;
    for(int i=2;;i++)
    {
        printf("%d\n",fibonacci[i-2]);
        fibonacci[i]=fibonacci[i-2]+fibonacci[i-1];
        if(fibonacci[i-1]>=usermax)
        {
            break;
        }
    }
}
