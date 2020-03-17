#include <stdio.h>

main(){
	srand(time(NULL));
	char alfabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','q','p','r','s','t','u','v','w','x','y','z'};
	int i = rand()%26+1;
	printf("%c", alfabet[i]);
}
