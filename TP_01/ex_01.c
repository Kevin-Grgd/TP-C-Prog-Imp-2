#include <stdio.h>
#include <stdlib.h>

void usage(char *s) {
  printf("Usage : %s <entier>\n(L'entier doit être sttictement supérieur à 0)\n", s);
  exit(EXIT_FAILURE);
}


int main( int argc, char *argv[]) {
  if (argc < 2) {
    usage(argv[0]);
  }

  int i,j;
  
  int nb_ligne = atoi(argv[1]);
  int nb_etoile = 0;


  for (i=0;i<nb_ligne;i++) {
    nb_etoile = 2*i+1;
    for (j=0;j<(nb_ligne-i);j++) {
      printf(" ");
    }
    for (j=0;j<nb_etoile;j++) {
      printf("*");
    }
    printf("\n");
  }

  exit(EXIT_SUCCESS);
}
