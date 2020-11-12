/******************************************************************
 * Fichier : utilitaire.c
 * Fonctionnalités : - Récupération des paramètres
                     - Opérations de bases
                     - Utilisation des fonctions implémentées
 * Auteur : Kévin GOURGAUD
 * Date de création : 04/02/2020
*******************************************************************/

#include "utilitaire.h"


//renvoie opérande 1 (partie gauche)
double op_01(char *op[]) {
  return atof(op[1]);
}

//renvoie opérande 2 (partie droite)
double op_02(char *op[]) {
  return atof(op[3]);
}


//Réalisation de l'opération en fonction du paramètre
double real_Operation(char *op[]) {
  //Addition
  if (strcmp(op[2],"+") == 0) {
    return op_01(op) + op_02(op);
  }

  //Soustraction
  else if (strcmp(op[2],"-") == 0) {
    return op_01(op) - op_02(op);
  }

  //Multiplication
  else if (strcmp(op[2],"x") == 0) { //Le caractère * n'est pas reconnu
    return op_01(op) * op_02(op);
  }

  //Division
  else if (strcmp(op[2],"/") == 0) {
    return op_01(op) / op_02(op);
  }

  //Puissance
  else if (strcmp(op[2],"^") == 0) {
    return pow(op_01(op),op_02(op));
  }

  //Autre opérations inconnues
  else {
    fprintf(stderr,"Erreur, opérande <%s> inconnue.\n",op[2]);
    exit(EXIT_FAILURE);
  }
}


//renvoie la fonction appelé
double fct_Appl(char *fct[]) {
  return atof(fct[2]);
}


//Réalisation de l'opération utilisation une fonction
double real_Fonction(char *fct[]) {
  //Sinus
  if (strcmp(fct[1],"sin") == 0) {
    return sinus(fct_Appl(fct));
  }

  //Cosinus
  else if (strcmp(fct[1],"cos") == 0) {
    return cosinus(fct_Appl(fct));
  }

  //Tangente
  else if (strcmp(fct[1],"tan") == 0) {
    return tangente(fct_Appl(fct));
  }

  //Exponnentiel
  else if (strcmp(fct[1],"exp") == 0) {
    return expo(fct_Appl(fct));
  }

  //Logarithme népérien
  else if (strcmp(fct[1],"ln") == 0) {
    return log_n(fct_Appl(fct));
  }

  //Log10
  else if (strcmp(fct[1],"log") == 0) {
    return log_b10(fct_Appl(fct));
  }

  //Racine carré
  else if (strcmp(fct[1],"sqrt") == 0) {
    return racine_carre(fct_Appl(fct));
  }

  //Autre fonction inconnues
  else {
    fprintf(stderr,"Erreur, fonction <%s> inconnue.\n",fct[1]);
    exit(EXIT_FAILURE);
  }
}
