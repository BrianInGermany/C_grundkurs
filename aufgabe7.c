/*aufgabe7.c*/
#include <stdio.h>

main(){
    double liter_verbrauch,kilometer;
    printf("\n\t1. R e c h e n p r o g r a m m\n");
    printf("\nBitte den Verbrauch in Litern eingeben :");
    scanf("%lf", &liter_verbrauch);
    printf("Bitte die Anzahl der gefahrenen Kilometer eingeben :");
    scanf("%lf", &kilometer);
    printf("\nVerbrauch pro 100km =");
    printf("\n%.2lf pro 100km\n\n", 100*liter_verbrauch/kilometer);
}

