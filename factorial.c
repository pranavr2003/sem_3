#include <stdio.h>

int factorial(int);

int main(void) {

int result = 0;
result = factorial(5);
printf("It is Final val inside main():  %d", result);

return 0;

}

int factorial(int n) {

if (n==1) {
  printf("Inside n==1: %d\n", n);
  return 1;
}

printf("%d x ", n);

return (n*factorial(n-1));

}
