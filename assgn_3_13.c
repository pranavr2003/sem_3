#include <stdio.h>
#include <string.h>

int nr_Digits(int num, int count);

int main()
{
    int num = 0;
    int count = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    printf("\nLength: %d\n", nr_Digits(num, count));

    return 0;
}

int nr_Digits(int num, int count)
{

    if (num == 0)
        return count;
    else
    {
        printf("%d", num % 10);
        return nr_Digits(num / 10, count + 1);
    }

}