#include <stdio.h>

main(){
	int a,b, mnozenie;
	printf("Podaj pierwsza liczbe");
	scanf("%d", &a);
	printf("Podaj druga liczbe");
	scanf("%d", &b);
	mnozenie=a*b;
	
	if(mnozenie>100){
		printf(">100");
	}
	else if(mnozenie<100){
		printf("<100");
	}
	else if(mnozenie=100){
		printf("=100");
	}
	
}
