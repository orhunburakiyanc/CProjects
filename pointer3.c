#include <stdio.h>
#include <stdlib.h>
//0'dan 14'e kadar olan elemanlari tanimlayin
// cift karakterli bastir
// tek karakterleri bastir
int main()
{
    int dizi[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int *p;
    printf("even numbers\n=>");
    for(p=dizi;p<dizi+15;p++)
    {
        if(*p%2==0){

            printf("%d\t",*p);
        }
    }
    printf("\nodd numbers\n=>");
    for(p=dizi;p<dizi+15;p++)
    {
        if(*p%2==1){

            printf("%d\t",*p);
        }
    }
}
