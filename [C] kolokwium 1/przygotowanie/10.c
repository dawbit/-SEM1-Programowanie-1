#include <stdio.h>

main(){
	int i;
	
	printf("1/2/3?");
	scanf("%d", &i);
	
	switch(i){
		case 1: printf("wybrano 1");break;
		case 2: printf("wybrano 2");break;
		case 3: printf("wybrano 3");break;
		default: printf("nie wybrano 1/2/3");break;
	}
}
