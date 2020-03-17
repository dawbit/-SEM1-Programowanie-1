#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
	char A[100];
	int i;
	printf("Podaj zdanie: ");
	fgets(A, 100, stdin);
	int dlugosc = strlen(A);
	printf("Zdanie odwrocone: ");
	for (i = dlugosc ; i>=0; i--){
		printf("%c", A[i]);
	}
	
	printf(" \n %d", dlugosc);

	getch();
}

