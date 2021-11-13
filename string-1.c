
#include <stdio.h>

int main()
{

    char hello[] = "mening birinchi stringim";
    int strings = sizeof(hello) / sizeof(hello[0]);

    for (int i=0; i<strings; i++)
    {
        printf("%d-%c\n", hello[i], hello[i]);
    }

    return 0;
}