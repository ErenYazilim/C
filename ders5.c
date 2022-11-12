#include <stdio.h>

int main(){
	int verilen;
	printf("Sayiyi tuttum haydi bilmeye calis.\n");
	scanf ("\n%d",&verilen);
	if(verilen==5){
		printf("Dogru, tebrikler.");
		exit(3);
}
	else if(verilen<5)
		printf("Yanlis, Sayiyi buyut.");
	else if(verilen>5)
		printf("Yanlis, Sayiyi kucult.");
	
	printf("Bilmeye calis.\n");
	scanf ("\n%d",&verilen);
	if(verilen==5){
		printf("Dogru, tebrikler.");
		exit(3);
}
	else if(verilen<5)
		printf("Yanlis, Sayiyi buyut.");
	else if(verilen>5)
		printf("Yanlis, Sayiyi kucult.");

	printf("Bilmeye calis.\n");
	scanf ("\n%d",&verilen);
	if(verilen==5){
		printf("Dogru, tebrikler.");
		exit(3);
}
	else if(verilen<5)
		printf("Yanlis bildin ve hakkin bitti.");
	else if(verilen>5)
		printf("Yanlis bildin ve hakkin bitti.");

	}