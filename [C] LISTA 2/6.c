#include <stdio.h>
#include <conio.h>
#include <string.h>

void odwroc(char *s, char *t);

main(){
    char poczatkowy[1024] = {0}, odwrocony[1024] = {0};

    printf("Podaj ciag :\n");
    fgets(poczatkowy, 1024, stdin);

    odwroc(poczatkowy, odwrocony);

    printf("\nOdwrocony ciag: %s\n", odwrocony);

    system("pause");
    return 0;
}

void odwroc(char *s, char *t){
    int i, dlugosc_ciagu;

    dlugosc_ciagu = strlen(s);

    for(i = 0; i <= dlugosc_ciagu-1; i++){
        t[i] = s[dlugosc_ciagu - 1 - i];
    }
}
