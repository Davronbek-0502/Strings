// satr berilgan berilgan satrning katta lotin harifini aniqlovchi dastur tuzilsin 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    printf("\n");
    char ism[100];


    printf("Satr kiriting : ");
    fgets(ism, 100, stdin);

    int ism_olchami = strlen(ism)-1;
    printf("\n");
    
    int k=0;
    for (int i = 0; i < ism[i]; i++)
    {
        if (ism[i]>=65 && ism[i]<=90){
        k++;
    }
    }
        printf(" Katta harflar soni:%d\n", k);
        printf("\n");

    return 0;
}