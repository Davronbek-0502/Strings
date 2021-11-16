#include <stdio.h>
#include <string.h>


int main(){
    int counter=0;
    
    char belgi[] = "hello how are you";
    for (int i = 0; i < sizeof(belgi) / sizeof(belgi[0]); i++)
    {
        printf("O'zgaruvchining %d-elmenti: %c\n", i + 1, belgi[i]);
        counter++;
    }
        printf("\nElement soni : %d\n", counter);
        printf("\n");
      


    return 0;
}