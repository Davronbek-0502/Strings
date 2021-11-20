#include <stdio.h>
#include <math.h>

int main (){

    int n,a=0;

    printf("son kiriting: ");
    scanf("%d", &n);

    for(n;n>0;n){
        a+=n%10;
        n/=10;
    }
    
    printf ("sonlar yig'indisi:  %d\n", a);
    return 0;
}