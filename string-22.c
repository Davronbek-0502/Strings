
#include <stdio.h>
#include <string.h>

int main()
{   
    printf("\n");
    int count = 0;
    char str[100];

    printf("son kiriting: ");
    fgets(str, 100, stdin);
    int str_olchami = strlen(str);

    printf("\n");

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            count = count + str[i] - 48;
        }
    }

    printf("Natija: %d\n", count);
    return 0;
}