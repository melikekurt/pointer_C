#include <stdio.h>
//Melike Kurt 20120205009 Bu program bir string alip ters cevirir
char *ters_cevir(char* string){
 	
	char *temp=(char*)malloc(7*sizeof(char)); //tersini tutmak icin bir pointer
    int i,j;
    //int n = sizeof(string)/sizeof(char);
   for(i=0,j=6;string[i]!='\0'&&j>=0;i++,j--){ //tersten basa atama gerceklesir
      temp[j]=string[i];
    }
	return temp; //tersini tutan pointer dondururlur
	free(temp);
}
int main() {
    char *string="merhaba"; //pointer dizimiz
    
 
    char* temp =ters_cevir(string);//fonk cagiriyoruz
    printf("%s",temp);//yazdiriyoruz
    
    return 0;
}
