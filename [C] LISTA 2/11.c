#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long int m=0, n=0, i=0;
char bin[1024];

tobin(unsigned long int *x){
	unsigned long int px=*x;	
    while (px>0){
	if(px % 2 == 0){
		px=px/2;
		bin[i]='0';
	}
	else{
		px=(px-1)/2;
		bin[i]='1';
	}
	i++;
	}
	printf("\n");
	printf("Liczba %d w zapisie binarnym %s",*x, strrev(bin));
	
	i=0;
}

main(){
    printf("Podaj liczbe n\n");
    scanf("%i", &n);
    printf("Podaj liczbe m\n");
    scanf("%i", &m);
    
    unsigned long int zapalanie=n;  
    printf("\n a) zapalanie m bitu ");
    zapalanie = zapalanie | (1 << m);
    printf("%i", zapalanie);
    tobin(&zapalanie);
    
    unsigned long int wygaszanie=n;    
    printf("\n b) wygaszanie m bitu ");
    wygaszanie = wygaszanie & ~(1 <<m);
    printf("%i", wygaszanie);
    tobin(&wygaszanie);

    unsigned long int negacja=n;    
    printf("\n c) negacja m bitu ");
    negacja = negacja ^ ~(1 <<m);
    printf("%i", negacja);
    tobin(&negacja);

    unsigned long int lewo=(n<<m);
    printf("\n d) przesuniecie o m w lewo ");
    printf("%i", lewo);
    tobin(&lewo);

    unsigned long int prawo=(n>>m);
    printf("\n e) przesuniecie o m w prawo ");
    printf("%i\n", prawo);
    tobin(&prawo);

    return 0;
}
