#include <stdio.h>;
int main(){
	int not;
	printf("Notunuzu giriniz.");
	scanf("%d",&not);
	if(not>=90){
		printf("AA");
	}
	if(not>=80 && not<90){
		printf("BA");
	}
	else if(not>=70 && not<80)
		printf("BB");
		
	else
		printf("BB");
	
		
}