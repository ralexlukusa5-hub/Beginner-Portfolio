#include <stdio.h>
#include <stdlib.h>

int main()
{
    int conversion;
    int valeur;
    float resultat;

    printf("Choisissez votre conversion\n");
    printf("1. Metres en Pieds\n");
    printf("2. Kilogrammes en Livres\n");
    printf("3. Celsius en Fahrenheit\n");
    scanf("%d", &conversion);

    switch (conversion) {
        case 1 :
            printf("Entrez votre longueur en Metre : ");
            scanf("%d", &valeur);
            resultat=valeur*3.281;
            printf("%d metres valent %.2f pieds", valeur,resultat);
            break;


        case 2 :
            printf("Entrez votre masse en Kilogramme : ");
            scanf("%d", &valeur);
            resultat=valeur*2.205;
            printf("%d kilogrammes valent %.2f livres", valeur,resultat);
            break;


        case 3 :
            printf("Entrez votre temperature en Celsius : ");
            scanf("%d", &valeur);
            resultat=(9.0/5.0)*valeur+32;
            printf("%d °C valent %.2f °F", valeur,resultat);
            break;

     default :
        printf("Choisissez un des cas ci-dessus !");
    }

    return 0;
}
