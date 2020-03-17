#include <stdio.h>
#include <conio.h>

main(){
	int h, i, j;
	printf("Jaka wysoka ma byc choinka?");
	scanf("%d", &h);
	

	for(i=2; i<=h; i++){
		for (j=2; j<=i; j++){
		printf("*");
		}
	printf("\n");
	}
	printf("#");
	getch();
}
