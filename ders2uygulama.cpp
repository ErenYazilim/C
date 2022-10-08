#include <stdio.h>
int main(){
	int d,a; //değişkenleri atadık
	printf("Bir sayi giriniz"); //kullanıcıdan sayı girmesi istendi
	scanf("\n%d",&d); //girilen sayı d değişkenine atandı
	printf("\nBir sayi daha giriniz"); //kullanıcıdan bir sayı daha istendi
	scanf("\n%d",&a); //girilen bu sayı a değişkenine atandı
	printf("\nGirilen sayi:%d",d); //girilen ilk sayı yani d ekrana yazıldı
	printf("\nGirilen sayi:%d",a);//girilen ikinci sayı yani a ekrana yazıldı
	printf("\nToplamlari:%d",a+d); //girilen iki sayıda toplandı ve ekrana yazıldı
	
	//40.15 video
}