#include <stdio.h>
#include <conio.h>
#include <string.h>

porownaj(char napis1[1024], char napis2[1024]){
	if(strcmp(napis1, napis2) == 0)
    printf("Lancuchy s1 i s2 sa takie same");
    else
    printf("Lancuchy s1 i s2 NIE sa takie same");
}

main(){
	char napis1[1024] = {0};
	char napis2[1024] = {0};
	printf("Podaj napis1:");
	fgets(napis1, 1024, stdin);
	printf("Podaj napis2:");
	fgets(napis2, 1024, stdin);
	printf("TO NAPIS1: %s\n", napis1);
	printf("TO NAPIS2: %s\n", napis1);
	porownaj(napis1, napis2);
}
