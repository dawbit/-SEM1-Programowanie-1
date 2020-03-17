#include <stdio.h>
#include <conio.h>

main(){
    char slowo[1024];
    int i = 0;
    int j = 0;

    printf("Podaj slowo \n: ");
    fgets(slowo, 1024, stdin);

    while(isdigit(slowo[i]) || slowo[i] == '-'){
        printf("%c", slowo[i]);
        i++;
        j++;
    }

    if(j=0)
        printf("0");

    return 0;
}
