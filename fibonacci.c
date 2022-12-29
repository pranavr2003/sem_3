#include <stdio.h>

int fibonacci(int);

int main(){

int n = 10;

for (int i=0; i<n; i++)	printf("%d ", fibonacci(i));
printf("\n");

}

int fibonacci(int i) {

if (i==0) return 0;
else if (i==1) return 1;

else return (fibonacci(i-2)+fibonacci(i-1));

}
