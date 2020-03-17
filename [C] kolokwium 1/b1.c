#include <stdio.h>

main(){
	char znak;	
	printf("Podaj znak");
	scanf("%c", &znak);
	int ascii = (int)znak;
	printf("Wczytany znak to: %c \n Kod ASCII w postaci dziesietnej: %d \n Kod ASCII w postaci osemkowej: %o \n Kod ASCII w postaci szesnastkowej: %x", znak, ascii, ascii, ascii);
	
	
	_getch();
	return 0;

}
