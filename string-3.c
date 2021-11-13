#include <stdio.h>
int main() {  
    int n;
    printf("Enter n : ");
    scanf("%d", &n);  
    printf("oldingi element %d = %c\n", n, n-1);
    printf("keyingi element %d = %c\n", n, n+1);

    return 0;
} 