#include <stdio.h>
#include <conio.h>

main(){
	int wys, i, j, k, l;
	printf("Jak wysoki ma byc trojkat?");
	scanf("%d", &wys);


for(i=1; i<=wys; i++)
{for (j=wys; j>=i; j--){
printf("*");
}
printf("\n");
	}
	getch();
}
