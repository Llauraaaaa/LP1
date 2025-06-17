#include <stdio.h>

int main()
{
    int cont =0;
    for(int L = -100000; L<=100000; L+= 3){
        printf("Valor de L: %i\n",L);
        cont++;
    }
    
    printf("valor de cont: %i\n",cont);

    return 0;
}
