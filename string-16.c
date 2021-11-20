
#include <stdio.h>
#include <string.h>


int main(){

    char satr[100];

    printf("Satrni kiriting: ");
    fgets(satr,100,stdin);

    for(int i=0; satr[i]!=0; i++){
        if (satr[i]>='A'&& satr[i]<='Z'){
            satr[i] = satr[i] + 32;
        }
    }

    printf("Natija: %s", satr);

    return 0;
}