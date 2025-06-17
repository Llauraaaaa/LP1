#include <stdio.h>

int main()
{
    int cont=0;
     for (int i = 0; i<10; i++){
         for (int E =0; E<10; E++ ){
             for(int L = 0; L<10; L++){
                 for(int A = 0; A<10; A++){
             printf("valor do i: %i\n valor de E: %i\t Valor de L: %i\t Valor de A: %i\t",i,E,L,A);
             cont++;
                 }
             }
         }
     }
     printf("valor de cont: %i\n",cont);
     
    return 0;
}