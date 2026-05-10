// Systeme d'authentification

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()

{
   const char Nom_d_utilisateur[10]="MEVTR12";
   const int Mot_de_passe=120207;

   char nom_d_utilisateur[20];
   int mot_de_passe;
   int tentatives=0;

   while (tentatives<3) {

    printf("Entrez votre nom d'utilisateur : ");
    scanf("%19s", nom_d_utilisateur);

    printf("Entrez votre mot de passe : ");
    scanf("%d", &mot_de_passe);

    if (strcmp(nom_d_utilisateur, Nom_d_utilisateur)==0 && mot_de_passe==Mot_de_passe) {
        printf("Connexion reussie. Bienvenue !\n");
        return 0;
    } else {
        tentatives ++;
        printf("Erreur d'authentification. Veuillez verifier votre nom d'utilisateur et/ou votre mot de passe.\n");
        printf("Il vous reste %d/3\n", 3-tentatives);
   }

    printf("Acces bloque. Trop de tentatives echouees.");


    return 0;
}
