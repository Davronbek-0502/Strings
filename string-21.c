#include <stdio.h>

int main()
{

    char raqam[] = "1,2,3,4,5,6,7,8,9";
    int N = sizeof(raqam) / sizeof(raqam[0]);

    for (int i = N - 1; i >= 0; i--)
    {
     int belgi = raqam[i];

    printf("%c ", raqam[i]);
    }
    printf("\n\n");

    return 0;
}