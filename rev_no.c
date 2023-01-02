#include <stdio.h>

int rem = 0;
int sum = 0;

int rev_no(int n) {

    if(n) {

        rem = n%10;
        sum = sum*10 + rem;
        n = n/10;

        rev_no(n/10);

    }

    else return sum;

}

int main() {

    int n = 12345;
    int revno = rev_no(n);
    printf("%d\n", revno);

    return 0;

}