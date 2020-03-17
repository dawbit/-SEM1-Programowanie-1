#include <stdio.h>

int main(){
    int a, b, c, d;
    float wyznacznik;

    printf("Podaj wsp. a, b, c, d \n: ");
    scanf("%i %i %i %i", &a, &b, &c, &d);

    wyznacznik = (a*d) - (b*c);

    if (wyznacznik != 0){
        printf("%f  %f\n%f  %f\n", d/wyznacznik, (-b)/wyznacznik, (-c)/wyznacznik, a/wyznacznik);
    }
    else{
        printf("\n%d  %d\n%d  %d\n", a, b, c, d);
    }

    printf("wyznacznik macierzy to = %f \n", wyznacznik);

    getch();
    return 0;
}
