#include <stdio.h>
#include<string.h>
#include<stdlib.h>
//Melike Kurt 20120205009 Bu program bir paragraftaki istenilen kelimenin kac tane oldugunu bulur
int kelime_say(char *paragraf,char *kelime) //fonksiyonumuz
{
 int tekrar=0; //degýskenlerýmýz
 char *a;  
 a=paragraf;

    while(*a!='\0')//paragrafýn sonuna kadar gitsin
    { 
      
      int elemansayisi=0;//eleman indekslerini tutuyoruz
      while(*a!=' ')//bosluga gelene kadar gir
      {
        if(kelime[elemansayisi]==*a)//esitseler gir
        {
          
          if(*(a+1)==' ' && kelime[elemansayisi+1]=='\0')// a+1 bosluga esit ve kelime sartý saglýyosa gir ve tekrarý arttýr
          {
            tekrar++;//esit geldikce tekrari arttir kelime tekrarini tutalim
          }
          elemansayisi++; //eleman sayisini arttir
        }
        else
        break;
        a++;// a yi arttir 

      }
      a++; //ife girmezse arttir while devam etsin
    }


  return tekrar; //kelimenin tekrar sayisini dondur
}
int main() {
    // Write C code here
    
    printf("%d",kelime_say("gel gelme gel gel ","gel"));//fonksiyonumuzu cagiriyoruz
    return 0;
}
