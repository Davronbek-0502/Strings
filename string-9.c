#include <stdio.h>
int main()
{
    printf("\n");
    char ism[100];
    char familiya[100];

    printf("ismingizni kiriting : ");
    scanf("%s", ism);

    printf("familiyangizni kiriting : ");
    scanf("%s", familiya);
   
    printf("Natija : %s %s",ism,familiya);
    printf("\n\n");
  

    return 0;
}