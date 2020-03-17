#include <stdio.h>

#define ROZMIAR 10

main(){
   double tab[ROZMIAR], max, min;
   int i,j;
 
   for(i=0; i<ROZMIAR; i++) {
    	printf ("Podaj element %d =\n", i);
    	scanf("%lf", &tab[i]);
	}
	
	max = tab[0];
    min = tab[0];
    
    printf("\nPodane wyrazy ciagu: \n");
	
	for(i=0; i<ROZMIAR; i++){	
		printf("%lf, ", tab[i]);
    	if(tab[i]>max){
    		max = tab[i];
		}
    	if(tab[i]<min){
    		min = tab[i];
		}
	}	
	
	printf("\nMIN: %lf \nMAX: %lf\n",min, max);
	//return 0;
}

