#include <stdio.h>
#include <string.h>
#include <math.h>

void reverseCubeArray(int *arr, int size);
void swapCube(int *a, int *b);

int main()
{

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter integers to populate the original array: ");
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / 4;

    reverseCubeArray(arr, size);

    return 0;
}

void reverseCubeArray(int *arr, int size)
{
    int i, j;

    for (i = 0, j = size - 1; i < j; i++, j--)
        swapCube(&arr[i], &arr[j]);

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void swapCube(int *a, int *b)
{
    int temp = *a;
    *a = pow(*b, 3);
    *b = pow(temp, 3);
}