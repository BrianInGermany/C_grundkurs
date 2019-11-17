/*bspl0011.c*/
#include <stdio.h>

main() {
    int x,y,z;
    printf("\nZahlenvergleiche\n");
    printf("\nBitte x eingeben: ");
    scanf("%i", &x);
    printf("Bitte y eingeben: ");
    scanf("%i", &y);
    printf("Bitte z eingeben: ");
    scanf("%i", &z);
    printf("\nDie groessere Zahl lautet %i\n",
    (x>y) ? ((z>x) ? z : x) : ((z>y)? z : y) );

}