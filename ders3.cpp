#include <stdio.h>
int main (){
	int a=10;
	{
		int a=5;
		printf("\n%d",a);
	}
	printf("\n%d",a);
}