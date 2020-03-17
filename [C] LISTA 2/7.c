#include <stdio.h>
#include <conio.h>
#include <string.h>

void litery(char *s, char *t);

main(){
    char ciag[1024] = {0}, liter[1024] = {0};

    printf("Podaj ciag :\n");
    fgets(ciag, sizeof ciag, stdin);

    litery(liter, ciag);

    printf("\nLitery wystepujace w tym ciagu: %s\n", liter);

    system("pause");
    return 0;
}

void litery(char *s, char *t){
    int i, j, dlT, dlS, temp, k = 0;

    dlT = strlen(t);

    for(i = 0; i < dlT; i++){
        temp = 0;
        dlS = strlen(s);
        t[i] = tolower(t[i]);

        if(isalpha(t[i])){
            for(j = 0; j<= dlS;  j++){
                if(t[i] == s[j])
                    temp++;
            }

            if(!temp){
                s[k] = t[i];
                k++;
            }
        }

    }
}
