#include <stdio.h>

int main(){
    
    float gasolina = 0, etanol = 0, valor =0,valor1 = 0, custo_ETANOL = 0, custo_Gasolina = 0;
    
    
    printf("Digite o valor da etanol \n");
    scanf("%f", &etanol);
    printf("Digite o valor do Gasolina \n");
    scanf("%f", &gasolina);
    
    
    if(etanol/gasolina > 0.70){
    printf("Coloque Gasolina \n");
    }
    
   else if(etanol/gasolina < 0.70){
    printf("Coloque Etanol \n");
    }
    
    printf("\nQual é o consumo médio do seu  carro em km por litro (km/L)? Se for flex, Diga o consumo de ambos, primeiro etanol, depois gasolina \n");
    scanf("%f", &valor);
    scanf("%f", &valor1);
    
    custo_ETANOL = etanol/valor;
    custo_Gasolina = gasolina/valor1;
    
    printf("\nCusto por km:\n");
    printf("Etanol: R$ %.3f/km\n", custo_ETANOL);
    printf("Gasolina:   R$ %.3f/km\n", custo_Gasolina);
    
    if (custo_Gasolina < custo_ETANOL){
        printf("\nCOLOQUE GASOLINA \n");
    }
    
    else if (custo_ETANOL < custo_Gasolina){
        printf("\nCOLOQUE ETANOL \n");
    }    

    return 0;
}
