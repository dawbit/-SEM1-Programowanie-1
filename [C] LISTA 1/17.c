#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
    double a, b, c, x1, x2, delta;

    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    delta = (b*b) - (4*a*c);
    x1 = (-b-sqrt(delta))/2*a;
    x2 = (-b+sqrt(delta))/2*a;

    if(delta < 0)
        printf("delta ujemna, tutaj powinny siê liczyæ pierwiastki zespolone, chyba?");

    else if(delta == 0)
        printf("x0 :", x1);

    else{
        printf("x1: %lf \nx2: %lf", x1, x2);
    }

    return 0;
}
