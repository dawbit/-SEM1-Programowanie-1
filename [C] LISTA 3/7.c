#include <stdio.h>

main(){
	srand(time(NULL));
	char *slownik[]={ "kotek", "domek", "myszka", "pies"};
	int i=rand()%4;
  	printf("%s\n", slownik[i]);
}
