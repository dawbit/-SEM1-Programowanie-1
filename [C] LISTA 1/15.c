#include <stdio.h>
#include <conio.h>

main(){
	int i, j, a;
	printf("Podaj a");
	scanf("%d", &a);
	

for(i=1; i<=a; i++){
	
	for (j=1; j<=a; j++){
		
		printf("%5d ",i*j);
}

printf("\n");
}
	
	getch();
}
