/******************************************************************
 * Fichier : main.c
 * Fonctionnalités : Programme principal
 * Auteur : Kévin GOURGAUD
 * Date de création : 04/02/2020
*******************************************************************/


#include "utilitaire.h"
#include "fonctions_trigo.h"


//Fonction d'usage
void usage(char *s) {
  printf("La calculatrice s'utilise de plusieurs manière :\n\n\n");
  printf("Soit des opérations entre deux réels x et y, de la manière suivante :\n");
  printf("*****************************************\n");
  printf("\t%s <x> op <y>\n*****************************************\n",s);
  printf("x et y étant deux réels et op étant une opération de la liste ci-contre :\n");
  printf("\t\tAddition : '+';\n\t\tSoustraction : '-';\n\t\tMultiplication : 'x';\n\t\tDivision : '/';\n\t\tPuissance : '^';");
  printf("\n\n\nSoit l'utilisation des fonctions sur un réels x, de la manière suivante :\n");
  printf("*****************************************\n");
  printf("\t%s <fct> <x>\n*****************************************\n",s);
  printf("x étant un réel et <fct> étant une fonction de la liste ci-contre :\n");
  printf("\t\tSinus : 'sin';\n\t\tCosinus : 'cos';\n\t\tTangente : 'tan';\n\t\tExponnentiel : 'exp';\n\t\tLogarithme népérien : 'ln';\n\t\tLogarithme base 10 : 'log';\n\t\tRacine carré : 'sqrt';\n");
  exit(EXIT_FAILURE);
}


//Programme principal
int main(int argc,char *argv[]) {
  if (argc < 2 || argc > 4) {
    usage(argv[0]);
  }

  double resultat;

  //4 arguments implique une opération "simple"
  if (argc == 4) {
    resultat = real_Operation(argv);
    printf("%s %s %s = %lf\n",argv[1],argv[2],argv[3],resultat);
  }

  //3 arguments implique une fonction 
  if (argc == 3) {
    resultat = real_Fonction(argv);
    printf("%s(%s) = %lf\n",argv[1],argv[2],resultat);
  }

  exit(EXIT_SUCCESS);
}
