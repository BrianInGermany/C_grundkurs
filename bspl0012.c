/*bspl0012.c*/
#include <stdio.h>
main() {
    int wahl;
    float betrag;
    printf("\n\t EURORECHNER\n");
    printf("\n1 DM  --> EURO\n2 EURO --> DM");
    printf("\n\nIhre Wahl: ");
    scanf("%i", &wahl);
    if (wahl == 1){
        printf("Bitte DM-Betrag eingeben: ");
        scanf("%f", &betrag);
        printf("\n%.2f DM sind %.2f EURO\n", betrag,
        betrag*0.51129);
    }
    if (wahl == 2) {
        printf("Bitte EURO Betrag eingeben: ");
        scanf("%f", &betrag);
        printf("\n%.2f EURO sind %.2f DM\n", betrag,
        betrag*1.95583);
    }
    printf("\n");
}