#include <stdio.h>

int main()
{   int cont =0;
    for(int L = 0; L<=10000; L++){
        printf("Valor de L: %i\n",L);
        cont++;
    }
    
    printf("valor de cont: %i\n",cont);

    return 0;
}