#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int a;
        union{
        float reel;
        char karakter;
    }yapiuni;
}yapistr;


void karaktermireelmi(yapistr y[])
{
    int x;
    printf("Enter a character or a real value that the program wants !\n");
    for(x=0;x<5;x++)
    {
        if(y[x].a==1)
            {
                printf("%d-Character =",x+1);
                scanf("%c",&y[x].yapiuni.karakter);
            }
        else if(y[x].a==0)
            {
                printf("%d-Real value =",x+1);
                scanf("%f",&y[x].yapiuni.reel);
            }
    }
    float sonuc=0,ort;
    for(x=0;x<5;x++)
    {
        sonuc+=y[x].yapiuni.reel;
    }
    ort=sonuc/x;
    printf("\t\t>>Median is = %2.f",ort);
}

int main()
{
    int b=0;
    yapistr yapi[5];
    printf("Write Just '1' or '0'\n");
    do{
        printf("%d-",b+1);
        scanf("%d",&yapi[b].a);
        b++;
    }while((yapi[b].a!=0) &&(yapi[b].a!=1) && b!=4);

    karaktermireelmi(yapi);
}
