#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, i, j;

    system("cls");

    printf("+-------------------+\n");
    printf("|   Hello World!    |\n");
    printf("+-------------------+\n\n");

    printf("Hello how many times? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}