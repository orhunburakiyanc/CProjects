#include <stdio.h>
#include <stdlib.h>
//Kullanicidan A ve B dizilerinin kac elemanli olacagini ve de hangi elemanlar olacagini sectir
// A dizisni bastir , B dizisini bastir , A dizisini B dizisinin sonuna bastir



int main()
{
    int a,b;
    int dizi1[50],dizi2[50];
    int *p1,*p2;
    printf("Please specify how many numbers you want for the first series\n=>");
    scanf("%d",&a);
    printf("Please specify how many numbers you want for the second series\n=>");
    scanf("%d",&b);




//First
    printf("\nPut numbers for the first series\n");
    int c=1;
    for(p1=dizi1;p1<dizi1+a;p1++)
    {
        printf("Element %d=>",c);
        scanf("%d",p1);
        c++;
    }



//Second
    printf("\nPut numbers for the second series\n");
    c=1;
    for(p2=dizi2;p2<dizi2+b;p2++)
    {
        printf("Element %d=>",c);
        scanf("%d",p2);
        c++;
    }



//Adding transaction
    for(p1=dizi1+a,p2=dizi2;p2<dizi2+b;p1++,p2++)                           //NOT = for icerisinde pointerlari adreslerini arttirdiktan sonra
    {                                                                           // eski hallerinde kalmadiklarini UNUTMA !!!
        *p1=*p2;
    }



//print
printf("\n");
p1=dizi1;
    for(int x=0;x<a+b;x++)
    {
        printf("%d\t",*p1);
        p1++;
    }
}
