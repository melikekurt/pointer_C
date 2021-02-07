//Melike Kurt 20120205009 Bu program string icinde istenilen harfin kac tane oldugunu bulur.
#include <stdio.h>
int karakter_say(char* string, char*  ch){//fonksiyonumuz
    int sayac=0;//kac tane oldugunu tutan deger
    int i;
    for(i=0;string[i]!='\0';i++){//tum dizi elemanlarini gezmeli
        if(string[i]==*ch||string[i]==*ch+32||string[i]==*ch-32)//esit oldugu ya da buyuk kucuk harf durumlarında sayacı arttırır
        sayac++;
    }
    return sayac;//sayacı dondurur
 }
int main() {
   
    printf("%d",karakter_say("Ali eve gel","e")); //fonksiyonu cagirip bastirir.
    
    return 0;
}
