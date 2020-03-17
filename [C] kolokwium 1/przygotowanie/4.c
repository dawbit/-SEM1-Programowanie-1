#include <stdio.h>

main(){
	int a,b;
	printf("Podaj pierwsza liczbe");
	scanf("%d", &a);
	printf("Podaj druga liczbe");
	scanf("%d", &b);
	
	if(a>b){
		printf("a>b");
	}
	else if(a<b){
		printf("a<b");
	}
	else if(a=b){
		printf("a=b");
	}
	
}
