#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void usage(char *s) {
    printf("Usage : %s <taille du tableau>, la taille du tableau devant être supérieure ou égale à 1.\n",s);
    exit(EXIT_FAILURE);
}

void lecture_right_to_left(char * tab, int n) {
    int i;
    for (i=n-1;i>=0;i--) {
        printf("%c ",tab[i]);
    }
}

int main(int argc, char *argv[]) {
    int n;
    char *c = NULL;
    char *tab;
    srand(time(NULL));

    if (argc != 2) {
        usage(argv[0]);
    }

    n=atoi(argv[1]);

    tab=malloc(n * sizeof(char));
    if (tab == NULL) {
        printf("Impossible d'allouer la mémoire %d\n",n);
        exit(EXIT_FAILURE);
    }

    c = tab;
    printf("Lecture de gauche à droite : ");

    while(c != &tab[n]) {
        *c = rand()%(126-33)+33;
        printf("%c ",*c);
        c++;
    }
    
    printf("\n");
    printf("Lecture de droite à gauche : ");
    lecture_right_to_left(tab,n);

    printf("\n");
    free(tab);
    exit(EXIT_SUCCESS);
}