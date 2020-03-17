#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
	char imie[1024];
	int i;
	printf("Podaj imie: ");
	scanf("%s", imie);
	char litera1='A';
	char litera2='a';
	int ilosc = 0;
	for (i = 0; i<=strlen(imie); i++){
		if ( imie[i] == litera1){
		    ilosc = ilosc + 1;
		}
		if ( imie[i] == litera2){
		    ilosc = ilosc + 1;
		}
	}
	printf("W imieniu %s litera A wystepuje %d razy", imie, ilosc);
	getch();
}

