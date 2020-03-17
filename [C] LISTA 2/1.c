#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define ROZMIARA 256
#define ROZMIARCIAG 1024
main(){
    char alfabet[ROZMIARA], ciag[ROZMIARCIAG];
    int i, j, iloscAlfabet[ROZMIARA];

    for(i = 0; i < ROZMIARA; i++){
    	if(isgraph(i))
            alfabet[i] = i;
        	iloscAlfabet[i] = 0;
    }

    printf("Podaj jakis ciag: ");
    fgets(ciag, ROZMIARCIAG, stdin);

    for(i = 0; i < strlen(ciag); i++){
        for(j = 0; j < ROZMIARA; j++){
            if(ciag[i] == alfabet[j])
                iloscAlfabet[j]++;
            }
    }

    for(i = 0; i < ROZMIARA; i++){
            if(iloscAlfabet[i])
                printf("%c: %d\n", alfabet[i], iloscAlfabet[i]);
    }

    getch();
    return 0;
}
