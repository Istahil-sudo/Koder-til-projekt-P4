#include <stdio.h>

int main()
{
    float tester=0.2;
    int bil = 2;
    int cykel = 1;

    if (cykel == bil) /*Der skal bruges ==, da det betyder true eller false. = tager værdien fra bil og lægger den ind i cykel*/
    {
        printf("if blev valgt\n");
    }
    else
    {
        printf("else blev valgt\n");
    }

    printf("\n");
    printf("cykel = %d\n", cykel);
    printf("bil = %d\n", bil);

    return 0;
}