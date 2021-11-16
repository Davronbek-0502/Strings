#include <stdio.h>

int main(){
    printf("\n");
    char hello[] = "Hello my name is Davronbek";
    int satr = sizeof(hello)/sizeof(hello[0]);

    for(int i=satr-1; i>=0; i--){
        int belgi = hello[i];

        printf("%c", hello[i]);
    }
    printf("\n\n");


    return 0;
}