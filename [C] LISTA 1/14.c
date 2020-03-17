#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){

	int dziesietna, i=0;
	char binarna[1024];
	printf("Podaj liczbe dziesietna: ");
	scanf("%d", &dziesietna);

	while(dziesietna>0){
		if(dziesietna % 2 == 0){
			dziesietna=dziesietna/2;
			binarna[i]='0';
		}
		else{
			dziesietna=(dziesietna-1)/2;
			binarna[i]='1';
		}
		i++;	
	}
	
	printf("\n Liczba w systemie binarnym to: %s", strrev(binarna));

	getch();
}

