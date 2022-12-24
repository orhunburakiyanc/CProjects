#include <stdio.h>
#include <stdlib.h>

void floydtriangle(int n)
{
    int loop1,loop2;
    int b=0;
    for(loop1=1;;loop1++)
    {
        loop2=1;
        for(;loop2<=loop1;loop2++)
        {
            b++;
            printf("%d ",b);
        }
        printf("\n");
        if(b==n)
        {
            break;
        }
    }
}
int main()
{
    int max;
    printf("Please enter a integer as a max for floyd's triangle program\n");
    scanf("%d",&max);
    floydtriangle(max);
}

