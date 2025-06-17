#include <stdio.h>

int main()
{
   int cont_i=0, cont_E=0, cont_L =0; 
     for (int i = 0; i<=10; i++){
         cont_i++;
         for (int E =0; E<=10; E++ ){
             cont_E++;
             for(int L = 0; L<=10; L++){
                 cont_L++;
             printf("valor do i: %i\n valor de E: %i\t Valor de L: %i\t",i,E,L);
             
                 }
             }
         }
     
     printf("\nTotal de iteracoes do loop i: %d\n",cont_i);
     printf("Total de iteracoes do loop E: %d\n",cont_E);
     printf("Total de iteracoes do loop L: %d\n",cont_L);

    return 0;
}
