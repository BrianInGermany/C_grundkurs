/*bspl0016.c*/
#include <stdio.h>

main() {
    int x = 5, y = 11, z = 3;
    int ergebnis, resultat;
    ergebnis = x < y;
    resultat = x || z < y;
    if (ergebnis) {
        printf("\nx ist kleiner als y");
    }
    else {
        printf("\nx ist groesser oder gleich y");
    }
    
    //printf("\n%i", resultat ? 1 : 0);
    printf("Something");
}