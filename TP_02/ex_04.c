#include <stdio.h>
#include <stdlib.h>

void usage(char *s) {
    printf("Usage : %s <nb_ligne> ...; nb_ligne devant être strictement supérieur ou égal à 1.\n",s);
  exit(EXIT_FAILURE);
}
int main(int argc, char *argv[]) {
    int i,j;
    int nb_tab;
    int nb_ligne;
    int **tab;
    if(argc < 2) {
	usage(argv[0]);
	exit(EXIT_FAILURE);
    }
      
    for(nb_tab=1;nb_tab<argc;nb_tab++) {
	nb_ligne = atoi(argv[nb_tab]);
	tab = (int **) malloc(nb_ligne*sizeof(int *));
	for(i=0;i<=nb_ligne;i++)
	    tab[i] = (int *) malloc((i+1) * sizeof(int));

	if(tab == NULL)	{
	    printf("Impossible d'allouer la mémoire.\n");
	    exit(EXIT_FAILURE);
	}

	for(i=0;i<=nb_ligne;i++) {
	    tab[i][0] = 1;
	    for(j=1;j<i;j++) {
		tab[i][j] = tab[i-1][j-1] + tab[i-1][j];
	    }
	}

	for(i=0;i<=nb_ligne;i++) {
	    for(j=0;j<i;j++) {
		printf("%d ", tab[i][j]);
	    }
	    printf("\n");
	}
	printf("\n");
    }
    exit(EXIT_SUCCESS);
}