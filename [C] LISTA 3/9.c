#include <time.h>
#include <stdio.h> 
 
main(){
   clock_t start=clock();
   char imie[1024];
   printf("Podaj imie\n");
   scanf("%s", &imie);
 
   printf("Otrzymalem imie %s po uplywie %ld sek.",imie, clock()/1000);
 
   getch();
   return 0;
}
