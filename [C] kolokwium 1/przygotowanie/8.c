#include <stdio.h>

main(){
	unsigned int suma, i;	
	int liczba;
	
	for(i=0; i<=-1; i++){
		printf("Podaj liczbe\n");
		scanf("%d", &liczba);
		
		if(0>liczba){
			printf("Liczba ujemna\n");
			suma = suma;
		}
		
		else if(liczba==1){
			return 0;
		}
		else{
			suma = suma+liczba;
			printf("Suma wynosi: %d\n", suma);
		}
		
	}

}
