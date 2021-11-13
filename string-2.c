#include <stdio.h>

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    char hello[] = "mening ikkinchi stringim";
    int strings = sizeof(hello)/sizeof(hello[0]);

    for(int i=0; i<strings; i++){
         n = hello[i];


        printf("%c", hello[i]);
    }
    printf(".\n");


    return 0;
}