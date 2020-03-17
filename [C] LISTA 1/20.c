#include <stdio.h>
#include <conio.h>

main(){
    unsigned int n, i;

    printf("Podaj liczbe naturalna (sprawdzimy, czy jest to liczba pierwsza): ");
    scanf("%d", &n);
    printf("\n");

    for(i = 2; i < n; i++){
        if(n % i == 0){
        	printf("to nie jest liczba pierwsza", n);
        	return 0;
        }
    }

    printf("to liczba pierwsza", n);
    
    return 0;
}
