#include <stdio.h>
#include <conio.h>

main(){
    double a, b, c, d, e, f, w, wX, wY, x, y;

    printf("Wspolczynnik 'a': ");
    scanf("%lf", &a);
    printf("Wspolczynnik 'b': ");
    scanf("%lf", &b);
    printf("Wspolczynnik 'c': ");
    scanf("%lf", &c);
    printf("Wspolczynnik 'd': ");
    scanf("%lf", &d);
    printf("Wspolczynnik 'e': ");
    scanf("%lf", &e);
    printf("Wspolczynnik 'f': ");
    scanf("%lf", &f);

    w = a*e - d*b;
    wX = c*e - f*b;
    wY = a*f - d*c;

    if(w != 0){
        x = wX / w;
        y = wY / w;

        printf("X = %lf\nY = %lf", x, y);
    }

    else if(w == 0 && (wX == 0 || wY == 0))
        printf("nie ma rozwi¹zañ");

    else
        printf("nieskonczenie wiele rozwiazan");

        printf("\n\nW = %lf\nWx = %lf\nWy = %lf", w, wX, wY);

    return 0;
}
