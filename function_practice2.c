#include <stdio.h>
#include <stdlib.h>
//write a program that clarify the perfect number which is given by user.
void mukemmelsayi(int number)
{
    int loop=1;
    int a=0;
    for(;loop<number;loop++)
    {
        if(number%loop==0)
        {
            a+=loop;
        }
        if(a==number)
        {
            printf("%d is a perfect number !!",number);
            break;
        }
    }
    if(a!=number)
    {
        printf("%d is not a perfect number !!",number);
    }
}
int main()
{
    int integer;
    printf("Please enter a integer\n==>");
    scanf("%d",&integer);
    mukemmelsayi(integer);
}
