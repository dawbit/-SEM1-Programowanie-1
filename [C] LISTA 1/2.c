#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){

	int dlugosc, i;
	printf("Podaj dlugosc ciagu gwiazdek: ");
	scanf("%d", &dlugosc);

	for(i=1; i<=dlugosc; i++){
		printf("*");
	}

	getch();
}
