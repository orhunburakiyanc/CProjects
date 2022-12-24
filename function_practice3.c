#include <stdio.h>	//01.08.2022
#include <stdlib.h>

//Set a list which the numbers getting from computer randomly
//find the maximum and minimum value from the list

void maximum(int x, int a[])
{
    int y;
    int max=0;
    for(y=0;y<x;y++)
    {
        if(a[y]>max)
        {
            max=a[y];
        }
    }
    printf("Maximum number of serie = %d\n",max);
}
void minimum(int x, int a[])
{
    int y;
    int min=a[0];
    for(y=1;y<x;y++)
    {
        if(min>a[y])
        {
            min=a[y];
        }
    }
    printf("Minimum number of serie = %d",min);

}
int main()
{
    int n,y;
    printf("How many numbers will written ? \n=>");
    //int a[n] en basta printf'in ustundeydi fakat boyle olunca asagidaki for dongusunde dizi elemanlarindan sadece 2 tanesini bastiriyordu
    //ve program duruyordu sonra a'yi scanf'in asagisina almaya karar verdim boylece program calismis oldu
    scanf("%d",&n);
    int a[n];
    srand(time(0));
    for(y=0;y<n;y++)
    {
        a[y]=rand()%100;
        printf("Dizi elemanlari => %d\n",a[y]);
    }
    maximum(n,a);
    minimum(n,a);
}

