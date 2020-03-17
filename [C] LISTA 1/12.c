#include <stdio.h>
#include <conio.h>
#include <ctype.h>

main() {
    char slowo[1024];
	int i;
	int iloscSlow = 0;

	printf("Podaj zdanie : ");
	fgets(slowo, 1024, stdin);

	for(i = 0; i < strlen(slowo); i++){
         if((slowo[i] == ' ' && slowo[i+1] != ' ') || (slowo[i] == slowo[strlen(slowo)-1] && slowo[i] != ' ')){
            iloscSlow++;
         }
	}

   printf("Ilosc slow w podanym zdaniu: %d", iloscSlow);

    return 0;
}
