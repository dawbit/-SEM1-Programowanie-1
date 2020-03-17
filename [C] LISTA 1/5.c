#include <stdio.h>
#include <conio.h>

main(){
	int i, j, a, b;
	printf("Podaj a");
	scanf("%d", &a);
	b=a/2;
	

for(i=1; i<=a; i++){
	if(i % 2 == 0){
		for(j=1; j<=b;j++)
		printf("# ");
	}
	
	if(i % 2 != 0){
		for(j=1; j<=b;j++)
		printf(" #");
	}
	
	printf("\n");
}

	
	getch();
}
