#include <stdio.h>
#include <string.h>

char tablica[14]={"kotek i piesek"};

wyczysc(){
	int i;
		for(i=0;i<=14;i++){
		tablica[i] = 0;
	}
}

main(){	
	printf("%s", tablica);
	
	wyczysc();
	
	printf("\nPUSTA: %s", tablica);
	printf("\nDLUGOSC PUSTEJ TABLICY: %d", strlen(tablica));
	return 0;
	system("pause");

}
