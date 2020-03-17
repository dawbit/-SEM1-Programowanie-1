#include <stdio.h>
#include <conio.h>
#include <ctype.h>

main() {
	printf("Podaj slowo: ");
	char slowo[1024];
	int i;
	fgets(slowo, 1024, stdin);

	for(i = 0; i < strlen(slowo); i++){
         if(slowo[i] != ' ')
            printf("%c", toupper(slowo[i]));
	}
	return 0;
}
