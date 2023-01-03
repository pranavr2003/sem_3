#include <stdio.h>

int count_indices_even(int[], int[]);

int main() {

    int arr[5], arr2[5];

    for (int i = 0; i < 5; i++) {

        printf("Enter integers to populate the original array: ");
        scanf("%d", &arr[i]);

    }

    printf("\nThere are %d even numbers in the original array\n", count_indices_even(arr, arr2));

    printf("The array containing the indices of even nos in the original array: ");

    for (int i = 0; i < 5; i++) {

        printf("%d ", arr2[i]);

    }

    return 0;

}

int count_indices_even(int arr[], int arr2[]) {

    int count = 0;

    for (int i = 0; i < 5; i++) {

        if (arr[i] % 2 == 0) {

            arr2[count] = i;
            count++;

        }

        else arr2[i] = 0;

    }

    return count;

}

