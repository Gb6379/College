#include <stdio.h>
#include <stdlib.h>
union Numero {
    int x;
    float y;
}numero;
int main()
{
    numero.x=100;
    printf("Valores da uniao: %d e %.2f\n",numero.x, numero.y);

    numero.y=101.5;
    printf("Valores da uniao: %d e %.2f\n",numero.x, numero.y);

    return 0;
}
