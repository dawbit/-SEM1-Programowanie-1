#include <stdio.h>
#include <conio.h>
#include <ctype.h>

main() {
    char slowo[1024];
	int i;
	int iloscO = 0;

	printf("Podaj zdanie: ");
	fgets(slowo, 50, stdin);

	for(i = 1; i < strlen(slowo) - 1; i++){
        if(toupper(slowo[i]) == toupper(slowo[i-1])){
            iloscO++;
        }
	}

    printf("Ilosc sasiednich wystapien 'O' w podanym zdaniu: %d", iloscO);

    return 0;
}
