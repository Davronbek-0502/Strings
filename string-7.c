#include <stdio.h>

int main()
{
    int massiv[10][10] = {{64, 65,66, 67, 68, 69, 70, 71}, {97, 98, 99, 100, 81, 93, 28, 98}};
    char birinchi = massiv[0][0], oxirgi = massiv[1][7];

    printf("\n\n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%d \t", massiv[i][j]);
        }
        printf("\n\n\n");
    }

    printf("birinchi: %c\n", birinchi);
    printf("oxirgi: %c\n", oxirgi);

    return 0;
}