#include <stdio.h>
#include <stdlib.h>

// write a program that choose a number in the list which is added numbers into the list by computer randomly
// When selecting the number, write down which order you are in    01.08.2022

void silmekistermisin(int dizi[], int n)
{
    int press;
    printf("\nWould you want to delete any element in the serie ?\nIf you want press '1'\nIf you don't press '2'\n");
    scanf("%d",&press);
    if(press==1)
    {
        deletelement(dizi,n);
    }
    else if (press==2)
    {
        printf("The program has been closed !!");
    }
}

void deletelement(int dizi[], int n)
{
    int a,sira,i;
    int yenidizi[100];
    printf("Which number do you want to delete please select a rotation number\n=>");
    scanf("%d",&sira);
    printf("New serie\n");
    for(i=0;i<n;i++)
    {
        if(i==sira-1)
        {
            continue;
        }
         yenidizi[i]=dizi[i];
         printf("->%d\n",yenidizi[i]);
    }
}
int main()
{
    int n,i;
    printf("How many numbers that you want ?\n--Please enter a integer\n=>");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    printf("--Elements of the serie--\n");
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d->%d\n",i+1,dizi[i]);
    }
    silmekistermisin(dizi,n);
}

