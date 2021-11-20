#include <stdio.h>
#include <string.h>

int main()
{

    char katta[100];

    printf("\n");
    printf("Satrni kiriting : ");
    fgets(katta, 100, stdin);

    for (int i=0; katta[i] != 0; i++)
    {
        if (katta[i]>='A' && katta[i]<='Z')
        {
            katta[i] = katta[i] + 32;
        }
        else if (katta[i]>='a' && katta[i]<='z')
        {
            katta[i] = katta[i] - 32;
        }
    }

    printf("Natija: %s", katta);

    return 0;
}