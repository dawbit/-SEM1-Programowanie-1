#include <stdio.h>
#include <conio.h>
#include <string.h>

przepisz(char napis1[1024], char napis2[1024]){
	strcpy(napis2, napis1);
	printf("NAPIS2: %s (skopiowany)", napis2);
}

main(){
	char napis1[1024] = {0};
	char napis2[1024] = {0};
	printf("Podaj napis1:");
	fgets(napis1, 1024, stdin);
	printf("TO NAPIS1: %s\n", napis1);
	przepisz(napis1, napis2);
}
