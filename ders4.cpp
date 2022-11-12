#include <stdio.h>

int main(){
	int ort;
	printf("Ortalamanizi giriniz.");
	scanf ("\n%d",&ort);
	if(ort>=85){
		printf("Takdir aldiniz, tebrikler");
}
	else if(ort<85 && ort>=70)
		printf("Tesekkur aldiniz, biraz daha calisarak takdir almaya calisin");
	else
		printf("Belge alamadiniz, daha cok calisin");
		
	
	}