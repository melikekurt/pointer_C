//Melike Kurt 20120205009 Bu program verilen iki stringi birlestirir.
#include<stdio.h>
#include<stdlib.h>
char* string_birlestir(char* str1, char* str2){//Fonksiyonumuz
    
	char* yeniString=(char*)malloc(12*sizeof(char));//hata olmamasy için boyutunu belirtiyoruz
    int i;
	for(i=0;str1[i]!='\0';i++)//birinci stringi atiyoruz
    yeniString[i]=str1[i];
    int j,k;
    for(j=3,k=0;str2[k]!='\0';k++,j++)//kaldigi yerden ikinci stringi atiyoruz
    yeniString[j]=str2[k];
    
    return yeniString;//elde ettigimiz yeni stringi donduruyoruz
}
int main(){
    
    printf("%s",string_birlestir("Ali"," eve gel"));//fonksiyonumuzu cagirip bastiriyoruz
    
    
    
    return 0;
}
