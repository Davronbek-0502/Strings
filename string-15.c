
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    printf("\n");
    char satr[100];


    printf("Satr kiriting : ");
    fgets(satr, 100, stdin);

    int satr_olchami = strlen(satr)-1;
    printf("\n");
    
    int k=0;
    for (int i = 0; i < satr[i]; i++)
    {
        if (satr[i]>=97 && satr[i]<=122){
        k++;
    }
    }
        printf("harflar soni:%d\n", k);
        printf("\n");

    return 0;
}