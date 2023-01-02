#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str1, *str2, *str3;
    int len1, len2, len3, i, j;

    str1 = (char *)malloc(32);
    str2 = (char *)malloc(32);
    str3 = (char *)malloc(len3);

    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 % 2 == 0)  len3 = len1 / 2 + len2 / 2;
    else    len3 = len1 / 2 + len2 / 2 + 1;

    for (i = 0; i < len1 / 2; i++)
        str3[i] = str1[i];

    for (j = len2 / 2; j < len2; j++)
        str3[i++] = str2[j];

    str3[i] = '\0';

    printf("\nString 1 is: %s, string 2 is %s, and the concatenated string 3 is: %s\n\n", str1, str2, str3);

    free(str1);
    free(str2);
    free(str3);

    return 0;
}

