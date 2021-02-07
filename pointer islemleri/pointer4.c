//Melike Kurt 20120205009 Bu program recursive bir fonksiyonla girilen kelimenin tersi ile ayni olup olmadigini kontrol eder
#include<stdio.h>
#include<stdlib.h>
int tersi_ile_ayni_mi(char *dizi,int eleman,int i)
    {
     
     if(dizi[i]==dizi[eleman-1])//dizinin ilk ve son elemanlarini sirayla karsilastirir ayni ise 1 döner 
             return 1;                       
    
     else if (dizi[i]!=dizi[eleman-1])//dizinin ilk ve son elemanlarini sirayla karsilastirir farkliysa 0 döner
     		return 0;   
     
     return tersi_ile_ayni_mi(dizi,eleman-2,i+1);        //fonksiyonu cagirir
 }
 int main(){
 	
 	char dizi[20];
     scanf("%s",dizi); //diziyi aliyoruz                   
     int eleman ,i=0; 
     eleman=strlen(dizi);//dizinin eleman sayisi icin
     printf("%d", tersi_ile_ayni_mi(dizi,eleman,i));//bastiriyoruz
 	
 	
 	
 	
 	
 	return 0;
 }
