#include <stdio.h>
#include <time.h>

main(){
	srand(time(NULL));
	int n1, x, y, i, losowa;
	printf("Podaj ilosc liczb losowych");
	scanf("%d", &n1);
	printf("Podaj poczatek przedzialu:");
	scanf("%d", &x);
	printf("Podaj koniec przedzialu:");
	scanf("%d", &y);

	for(i=1; i<=n1; i++){			
		losowa = 1 + rand()%(y-x)  + x;
		printf("%d \n", losowa);
	}
		
	_getch();
	return 0;

}
