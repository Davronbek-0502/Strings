#include <stdio.h>
#include <string.h>

int main()
{
    printf("\n");
    char ism[100];
    char familiya[100];

    printf("ismingizni kiriting : ");
    scanf("%s", ism);

    printf("familiyangizni kiriting : ");
    scanf("%s", familiya);

    int satr_olchami = strlen(ism), N1;
    int satr = strlen(familiya), N2;

    printf("N1= ");
    scanf("%d", &N1);

    printf("N2= ");
    scanf("%d", &N2);

    for (int i = 0; i < N1; i++)
    {
        printf("%c", ism[i]);
    }

    for (int j = satr; j >= satr - N2; j--)
    {
        printf("%c", familiya[j]);
    }

    return 0;
}