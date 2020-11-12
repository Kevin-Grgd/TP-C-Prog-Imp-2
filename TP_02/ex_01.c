#include <stdio.h>
#include <stdlib.h>

void change(int var) {
    var = 5;
}

void change_pointeur(int *var) {
    *var = 5;
}


int main() {
    int var=0;
    printf("Variable au départ : %d\n",var);
    change(var);
    printf("Variable après changement (sans pointeur) : %d\n",var);
    change_pointeur(&var);
    printf("Variable après changement (avec pointeur) : %d\n",var);
    exit(EXIT_SUCCESS);
}