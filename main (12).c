#include <stdio.h>

int main()
{
    int cont=0; 
     for (int i = 0; i<=10; i++){
         for (int E =0; E<=10; E++ ){
             for(int L = 0; L<=10; L++){
                 cont++;
             printf("valor do i: %i\n valor de E: %i\t Valor de L: %i\t",i,E,L);
             
                 }
             }
         }
     
     printf("\nTotal de iteracoes do loop: %d\n",cont);

    return 0;
}
