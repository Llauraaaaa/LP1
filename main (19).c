#include <stdio.h>

float RazaoGasolina(float a, float b) {
   
    return a / b;
}

float custoE(float a, float b) {
   
    return a / b; 
}

float custoG(float a, float b) {
 
    return a / b;
}

float custoGNV(float a, float b) {
    return a / b;
}

int main() {
    float gasolina, etanol, resultado, valor, valor1, valor2, valor3, GNV, resultado1, resultado2, resultado3;
    
    printf("Digite o valor do etanol: ");
    scanf("%f", &etanol);
    printf("Digite o valor da gasolina: ");
    scanf("%f", &gasolina);
    
    resultado = RazaoGasolina(etanol, gasolina);
    
    if (resultado > 0.70) {
        printf("Coloque Gasolina (Razão: %.2f)\n", resultado);
    }
    else if (resultado < 0.70) {
        printf("Coloque Etanol (Razão: %.2f)\n", resultado);
    }
    else {
        printf("Tanto faz (Razão: 0.70)\n");
    }
    
    printf("\nQual é o consumo médio do seu carro em km por litro (km/L)?\n");
    printf("Se for flex, digite 1\n");
    printf("Se for GNV, digite 2\n");
    printf("Se não for nenhum desses, digite 3: ");
    scanf("%f", &valor);
    
    if (valor == 1) {
        printf("Digite o consumo do etanol e depois da gasolina (em km/L): ");
        scanf("%f %f", &valor1, &valor2);
        
        resultado1 = custoE(etanol, valor1);
        resultado2 = custoG(gasolina, valor2);
        
        if (resultado2 < resultado1) {
            printf("\nCOLOQUE GASOLINA (Custo por km: R$%.2f)\n", resultado2);
        }
        else if (resultado1 < resultado2) {
            printf("\nCOLOQUE ETANOL (Custo por km: R$%.2f)\n", resultado1);
        }
        else {
            printf("\nTanto faz (Custo igual: R$%.2f por km)\n", resultado1);
        }
    }
    else if (valor == 2) {
        printf("Digite o valor do GNV: ");
        scanf("%f", &GNV);
        printf("Digite o consumo do etanol, gasolina e GNV (em km/L): ");
        scanf("%f %f %f", &valor1, &valor2, &valor3);
        
        
        resultado1 = custoE(etanol, valor1);
        resultado2 = custoG(gasolina, valor2);
        resultado3 = custoGNV(GNV, valor3);
        
        if (resultado3 < resultado1 && resultado3 < resultado2) {
            printf("\nCOLOQUE GNV (Custo por km: R$%.2f)\n", resultado3);
        }
        else if (resultado2 < resultado1 && resultado2 < resultado3) {
            printf("\nCOLOQUE GASOLINA (Custo por km: R$%.2f)\n", resultado2);
        }
        else if (resultado1 < resultado2 && resultado1 < resultado3) {
            printf("\nCOLOQUE ETANOL (Custo por km: R$%.2f)\n", resultado1);
        }
        else {
            printf("\nEmpate entre os combustíveis.\n");
        }
    }
    else if (valor == 3) {
        printf("\nSeu carro não é flex nem GNV. Nenhuma comparação possível.\n");
    }
    else {
        printf("\nOpção inválida.\n");
    }
    
    return 0;
}