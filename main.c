#include <stdio.h>

int main()
{
    int A=0; int B=0; int C=0; int D=0; int SOMA; int SUBTRAÇÃO;
    int MULTIPLICAÇÃO; int DIVISÃO; int RESTO;  int resultado1, resultado2;
    
   printf("\n\tPrimeiro Valor: %i", A);
   printf("\tSegundo valor: %i", B);
   printf("\tTerceiro valor: %i", C);
   printf("\tQuarto valor: %i", D);
   
   printf("\n\v\tDigite os valores para as operações: \t");
   scanf("%i", &A);
   scanf("%i", &B);
   scanf("%i", &C);
   scanf("%i", &D);
   
   SOMA=A+B+C+D;
   SUBTRAÇÃO=A-B-C-D;
   MULTIPLICAÇÃO=A*B*C*D;
   DIVISÃO=A/B/C/D;
   RESTO=A%B%C%D;
   resultado1 = (A + B) * (C - D) / 2;
   resultado2 = (A * (B + C)) - D;
   
   printf("Resultados: \n");
   printf("SOMA: %i\n", SOMA);
   printf("Resultados: \n");
   printf("SUBTRAÇÃO: %i\n", SUBTRAÇÃO);
   printf("Resultados: \n");
   printf("MULTIPLICAÇÃO %i\n", MULTIPLICAÇÃO);
   printf("Resultados: \n");
   printf("DIVISÃO %i\n", DIVISÃO);
   printf("Resultados: \n");
   printf("RESTO %i\n", RESTO);
   printf("Resultado da primeira expressao (A + B) * (C - D) / 2: %d\n", resultado1);
   printf("Resultado da segunda expressao (A * (B + C)) - D: %d\n", resultado2);
    return 0;
}
