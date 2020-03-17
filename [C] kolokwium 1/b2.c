#include <stdio.h>
#include <time.h>

main(){
	srand(time(NULL));
	int random = rand() %100 + 1;
	printf("Wylosowana liczba to: %d \n", random);
	
	if(random%2==0 && random%3==0){
		printf("Jest to liczba parzysta oraz dzieli sie przez 3\n");
	}
	else if(random%2==0 && random%3!=0){
		printf("Jest to liczba parzysta i nie dzieli sie przez 3\n");
	}
	else if(random%2!=0 && random%3==0){
		printf("Nie jest to liczba parzysta, ale dzieli sie przez 3\n");
	}
	else if(random%2!=0 && random%3!=0){
		printf("To nie jest liczba parzysta i nie dzieli sie przez 3");
	}
	
	_getch();
	return 0;

}
