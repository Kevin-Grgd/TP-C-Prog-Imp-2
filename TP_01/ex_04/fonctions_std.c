/******************************************************************
 * Fichier : fonctions_std.c
 * Fonctionnalités : Implémenter les fonctions standarts
 * Auteur : Kévin GOURGAUD
 * Date de création : 11/02/2020
*******************************************************************/

#include "fonctions_std.h"

/*
liste fonction std :
exponentielle
logarithme népérien
log
sqrt
*/

// renvoie l'exponentielle du paramètre en entrée
// entrée : flottant
// sortie : flottant
double expo(double x) {
  return exp(x);
}

// renvoie le logarithme népérien du paramètre en entrée
// entrée : flottant
// sortie : flottant
double log_n(double x) {
  // ln(0) = -inf donc x doit être strict. supérieur à 0
  assert(x>0);
  return log(x);
}

// renvoie le logarithme en base 10 du paramètre en entrée
// entrée : flottant
// sortie : flottant
double log_b10(double x) {
  // log10(0) = -inf donc x doit être strict. supérieur à 0
  assert(x>0);
  return log10(x);
}

// renvoie la racine carré du paramètre en entrée
// entrée : flottant
// sortie : flottant
double racine_carre(double x) {
  // la racine carré ne peut être effectué qu'avec un nombre positif ou nul
  assert(x>=0);
  return sqrt(x);
}

