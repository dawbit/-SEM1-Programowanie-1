#include <stdio.h>
#include <conio.h>

#define ROZMIAR 200

main(){
    char pierwsza[ROZMIAR] = {0}, druga[ROZMIAR] = {0}, suma[ROZMIAR+1] = {0};
    int i, j, dlugoscP, dlugoscD, dlugosc, temp = 0, dlugoscBool, notconst = 0;

    printf("Wpisz pierwsza liczbe naturalna:\n");
    fgets(pierwsza, ROZMIAR, stdin);
    printf("Wpisz druga liczbe naturalna:\n");
    fgets(druga, ROZMIAR, stdin);

    dlugoscP = strlen(pierwsza) - 1;
    dlugoscD = strlen(druga) - 1;

    if(dlugoscP >= dlugoscD){
        dlugosc = dlugoscP;
        dlugoscBool = 0;
    }

    else{
        dlugosc = dlugoscD;
        dlugoscBool = 1;
    }

    for(i = 0; i < dlugosc; i++){
        if(!isdigit(pierwsza[i]) || !isdigit(druga[i])){
            return 0;
        }
     }
    if(dlugoscP != dlugoscD){
        if(!dlugoscBool){
            notconst = dlugoscP - dlugoscD;
            for(i = dlugosc - 1; i >= 0; i--){
                if(i - notconst >= 0)
                    druga[i] = druga[i - notconst];
                else
                    druga[i] = '0';
            }
        }
        else{
            notconst = dlugoscD - dlugoscP;
            for(i = dlugosc - 1; i >= 0; i--){
                if(i - notconst >= 0)
                    pierwsza[i] = pierwsza[i - notconst];
                else
                    pierwsza[i] = '0';
            }
        }
    }

    for(i = dlugosc - 1; i > 0; i--){
        pierwsza[i] -= 48;
        druga[i] -= 48;

        while(pierwsza[i] + druga[i] >= 10){
            suma[i-1] = 1;
            suma[i] += pierwsza[i] + druga[i] - 10 + 48;

            temp++;
            break;
        }
        if(!temp)
            suma[i] += pierwsza[i] + druga[i] + 48;
        else
            temp = 0;

        if(suma[i] == ':'){
            suma[i] -= 10;
            suma[i-1] += 1;
        }
}

    pierwsza[0] -= 48;
    druga[0] -= 48;

    if(pierwsza[0] + druga[0] >= 10){
        for(i = dlugosc; i > 0; i--){
            suma[i] = suma[i-1];
        }
        suma[0] = 1 + 48;
        suma[1] += pierwsza[i] + druga[i] - 10 + 48;
    }

    else
        suma[0] += pierwsza[0] + druga[0] + 48;

    printf("Suma :\n%s\n", suma);
    system("pause");
    return 0;
}
