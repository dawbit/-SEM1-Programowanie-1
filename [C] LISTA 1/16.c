#include <conio.h>
#include <stdio.h>

main(){
	int a, b, wynik, petla;
	char dzialanie, kontynuacja;

	while(petla){
		printf("Podaj pierwsza liczbe: ");
		scanf("%d", &a);
		getchar();
		printf("Wybierz rodzaj operacji: [+] [-] [*] [/] ");
		scanf("%c", &dzialanie);
		printf("Podaj druga liczbe: ");
		scanf("%d", &b);

		if(dzialanie == '/' && b == 0){
		printf("No ale przez zero to nie dzielimy ;-) \n");
		return main();
		}

		else{
			if(dzialanie == '+') dzialanie = 1;
			if(dzialanie == '-') dzialanie = 2;
			if(dzialanie == '*') dzialanie = 3;
			if(dzialanie == '/') dzialanie = 4;
		}

		switch(dzialanie){
		case 1: wynik = a + b; break;
		case 2: wynik = a - b; break;
		case 3: wynik = a * b; break;
		case 4: wynik = a / b; break;
		}

		getchar();
		printf("Wynik dzialania: %d\n\nCzy chcesz kontynuowac obliczenia? [T/N]: ", wynik);
		kontynuacja = getchar();

		if(kontynuacja == 't') petla = 1;
		else if(kontynuacja == 'n') petla = 1;
		else {
		getchar();
		printf("Wynik dzialania: %d\n\nCzy chcesz kontynuowac obliczenia? [T/N]: ", wynik);
		kontynuacja = getchar();
		}
	}	
return 0;	
} 
