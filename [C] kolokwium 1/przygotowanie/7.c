#include <stdio.h>

main(){
	int i=0, j[10], suma=0;
	
	for(i;i<10;i++){
		printf("Podaj ocene ucznia %d: \n", i);
		scanf("%d", &j[i]);
		suma=suma+j[i];
	}
	
	printf("Suma ocen to %d", suma);
}
