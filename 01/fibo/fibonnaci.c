#include <stdio.h>

int fib(int x) {
  if (x == 0)
    return 0;
  if (x == 1)
    return 1;
  return (fib(x-1) + fib(x-2));
}

void main() {
  int x;
  scanf("%d", &x);
  printf("%Die Fibonnaci-Zahl ist:%d\n", x,fib(x));
}