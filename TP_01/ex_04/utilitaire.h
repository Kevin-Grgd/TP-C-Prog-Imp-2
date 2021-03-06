/******************************************************************
 * Fichier : utilitaire.h
 * Fonctionnalités : header de utilitaire.c
 * Auteur : Kévin GOURGAUD
 * Date de création : 04/02/2020
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions_trigo.h"
#include "fonctions_std.h"

//Renvoie de l'opérande de gauche
double op_01(char *op[]);


//Renvoie de l'opérande de droite
double op_02(char *op[]);

//Effectue de l'opération
double real_Operation(char *op[]);

//Renvoie la fonction appelé
double fct_Appl(char *fct[]);

//Effectue l'opération avec la fonction demandée
double real_Fonction(char *fct[]);
