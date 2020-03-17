#include <stdio.h>
#include <conio.h>

char napis1[]={0}, napis2[]={0}, *pnapis1, *pnapis2;


porownaj(char *pnapis1, char *pnapis2){
	pnapis1 = &napis1;
	pnapis2 = &napis2;
    if( strncmp( *pnapis1, *pnapis2, 1024 ) == 0 )
         printf( "Badane wycinki lancuchow znakow sa rowne.\n" );
    else
         printf( "Badane wycinki lancuchow znakow nie sa rowne.\n" );
	
}

main(){
	printf("Podaj napis1: ");
	scanf("%s", &napis1);
	printf("Podaj napis2: ");
	scanf("%s", &napis2);
	printf("%s", napis1);
	printf("%s", napis2);
//	porownaj(pnapis1, pnapis2);
	getch();
}
