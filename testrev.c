#include <stdio.h>

// Write a recursive function to reverse a given number

int rev(int);

int main() {

    int n = 12345;

    printf("%d\n", rev(n));

    return 0;

}

int rev(int n) {

    int sum = 0;

    if (n == 0) return 0;

    else {

        // return (n%10) + rev(n/10);
        return (sum*10) + (n%10) + rev(n/10);

    }

}