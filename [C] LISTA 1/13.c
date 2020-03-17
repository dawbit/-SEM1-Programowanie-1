#include <stdio.h>
#include <conio.h>
#include <ctype.h>

main() {
    char liczba[1024], liczba2[1024];
	int i;
    int suma = 0;

	printf("Podaj liczbe: ");
	fgets(liczba, 1024, stdin);

	for(i = 0; i < strlen(liczba) - 1; i++){
        liczba[i] = liczba[i] - 48;
        suma = suma + liczba[i];
	}

   printf("Suma cyfr liczby wynosi %d", suma);

    return 0;
}
