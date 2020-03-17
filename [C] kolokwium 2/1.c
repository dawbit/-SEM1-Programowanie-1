#include <stdio.h>
#include <string.h>
 
struct student {
    char imie[20];
    char nazwisko[20];
    char adres[50];
    int pesel;
    char kierunek[30];
    int nrleg[20];
};
 
void drukuj(struct student *osoba){
	scanf("%s", &osoba->imie);
    printf("Imie : %s\n", osoba->imie);
    scanf("%d", &osoba->pesel);
    printf("PESEL %d\n", osoba->pesel);
} 
 
main(){

    struct student osoba;
	//osoba.pesel = 202;
	//scanf("%d", osoba.pesel);
	//printf("PESEL %d\n", osoba.pesel);
    //printf("Podaj imie\n");
    //	scanf("%s", &osoba.imie);
    //printf("Podaj nazwisko\n");
    //	scanf("%s", osoba.nazwisko);
    //printf("Podaj adres\n");
    //    scanf("%s", osoba.adres);
    //printf("Podaj pesel\n");
    //    scanf("%d", osoba.pesel);
    //printf("Podaj kierunek\n");
    //    scanf("%s", osoba.kierunek);
    //printf("Podaj nr legitymacji\n");
    //    scanf("%d", osoba.nrleg);
 	
 	drukuj(&osoba);

 
    return 0;
}
