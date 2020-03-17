#include <stdio.h>
#include <conio.h>

main() {
    char slowo[1024];
	int i, j, iloscLiter;

	printf("Podaj zdanie: ");
	fgets(slowo, 1024, stdin);

    for(i = 0; i < strlen(slowo) - 1; i++){
        slowo[i] = tolower(slowo[i]);
        if(slowo[i] == 'k' && slowo[i+1] == 'o' && slowo[i+2] == 't' && slowo[i+3] == 'e' && slowo[i+4] == 'k'){
            slowo[i] = 'p';
            slowo[i+1] = 'i';
            slowo[i+2] = 'e';
            slowo[i+3] = 's';
            slowo[i+4] = 'e';

            for(j = strlen(slowo) - 1; j > i+4; j--){
                slowo[j] = slowo[j-1];
             }

            slowo[i+5] = 'k';
        }
    }

    printf("%s", slowo);

    return 0;
}
