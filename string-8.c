#include <stdio.h>
int main()
{    
    printf("\n");
    char belgi;
    int n;

    printf("Belgi: ");
    scanf("%c", &belgi);

    printf("Enter n : ");
    scanf("%d", &n);

    printf("\n\n\n");

    printf("Natija: ");

    for (int i = 0; i < n; i++)
    {
        printf("%c", belgi);
    }
    printf("\n\n");
    return 0;
}