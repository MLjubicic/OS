#include <stdio.h>

/* Uebung Call by Value */ 
/* Es wird nur demonstriert dass a und b nicht */
/* am gleichen Ort im Speicher steht */


int b;

main() {
  int a = 10;
  printf("Inhalt von a: %d\n", a);
  printf("Speicheradresse: %p\n", &a);
  sub(a);
}

sub(int b) {
  b = b - 1;
  printf("Inhalt von b: %d\n", b);
  printf("Speicheradresse: %p\n", &b);
}
