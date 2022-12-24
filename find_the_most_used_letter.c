#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//find the most used letter in a sentence which is written with lower characters 
int main()
{
  char sentence[100];
  int lower_letter[26]={0};
  int index=0;
  printf("Please enter a sentence\n");
  gets(sentence);
  while(sentence[index])
  {
      if(sentence[index]>='a' && sentence[index]<='z')
      {
          lower_letter[sentence[index]-'a']++;
      }
     index++;
  }
 int encok=0;
 int letter;
  for(int a=0;a<26;a++)
  {
      for(int j=1;j<25;j++)
      {
          if((lower_letter[a]>lower_letter[j]) && (lower_letter[a]>encok))
          {
              encok=lower_letter[a];
              letter=a+'a';
          }
          else if((lower_letter[a]<lower_letter[j]) && (lower_letter[j]>encok))
          {
              encok=lower_letter[j];
              letter=j+'a';
          }
      }
  }
  printf("%d tane %c kullanilmis ",encok,(char)letter);
                                                             // bir int degerini char'a esitlemek icin char'in asci tablosundaki karsiligini alman gerek
                                                             // o da su sekilde yapilir m=='e' sen bu kesme isaretlerini kullandiginde asci'deki karsiligini alir ve onu m'e esitler


}

