#include <stdio.h>
#include <stdlib.h>

void usage(char *s) {
  printf("Usage : %s <entier m> <entier n>\nLes entiers m et n doivent étant supérieurs ou égaux à 0.\n",s);
  exit(EXIT_FAILURE);
}


int ackermann(int m,int n) {
  if (m==0) {
    return n+1;
  } else {
    if (m>0 && n==0) {
      return ackermann(m-1,1);
    } else {
      return ackermann(m-1,ackermann(m,n-1));
    }
  }
}

int main(int argc, char *argv[]) {

  int m,n;

  if (argc < 3) {
    usage(argv[0]);
  }

  m = atoi(argv[1]);
  n = atoi(argv[2]);


  printf("Resultat de A(%d,%d) = %d\n",m,n,ackermann(m,n));
  exit(EXIT_SUCCESS);
}
