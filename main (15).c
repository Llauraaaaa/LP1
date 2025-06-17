#include <stdio.h>

int main() {
    // Variáveis simplificadas
    float valor = 0, vale = 0, transporte = 0, sindicato = 0, MQ = 0;
    float imposto = 0, INSS = 0, FGTS = 0, Salario_final = 0;
    
    // Entrada de dados
    printf("Digite o seu salario: \n");
    scanf("%f", &valor);
    printf("Digite o valor do seu vale alimentação: \n");
    scanf("%f", &vale);
    printf("Voce tem vale transporte? se sim digite (1) se não digite (2) \n");
    scanf("%f", &transporte);
    printf("Voce contribui com o seu sindicato? se sim, digite (1) se não, digite (2)\n");
    scanf("%f", &sindicato);
    printf("Seu pagamento é mensal ou quinzenal? se mensal, digite (1), se quinzenal, digite (2) \n");
    scanf("%f", &MQ);
    
    // Cálculo do imposto de renda
    if (valor > 1518 && valor < 2259.20) {
        printf("Voce não paga imposto\n");
        imposto = 0;
    }
    else if (valor >= 2259.20 && valor <= 2826.65) {
        imposto = valor * 0.075;
        printf("Voce paga imposto de renda: %.2f\n", imposto);
    }
    else if (valor >= 2826.65 && valor <= 3751.05) {
        imposto = valor * 0.15;
        printf("Voce paga imposto de renda: %.2f\n", imposto);
    }
    else if (valor >= 3751.06 && valor <= 4664.68) {
        imposto = valor * 0.225;
        printf("Voce paga imposto de renda: %.2f\n", imposto);
    }
    else if (valor > 4664.68) {
        imposto = valor * 0.275;
        printf("Voce paga imposto de renda: %.2f\n", imposto);
    }
    else {
        printf("Valor de salário inválido ou isento\n");
    }
    
    // Cálculo do INSS
    if (valor == 1518) {
        INSS = valor * 0.08; 
        printf("Valor do desconto do seu INSS: %.2f\n", INSS);
    }
    else if (valor > 1518 && valor <= 2793.88) {
        INSS = valor * 0.09;
        printf("Valor do desconto do seu INSS: %.2f\n", INSS);
    }
    else if (valor > 2793.88 && valor <= 4190.83) {
        INSS = valor * 0.12;
        printf("Valor do desconto do seu INSS: %.2f\n", INSS);
    }
    else if (valor > 4190.83 && valor <= 8157.41) {
        INSS = valor * 0.14;
        printf("Valor do desconto do seu INSS: %.2f\n", INSS);
    }
    else {
        printf("Valor de salário fora da faixa de cálculo do INSS\n");
    }
    
    // Cálculo do vale transporte
    float desconto_transporte = 0;
    if (transporte == 1) {
        desconto_transporte = valor * 0.06;
        printf("Valor do vale transporte a ser descontado: %.2f\n", desconto_transporte);
    }
    
    // Cálculo da contribuição sindical
    float contrib_sindicato = 0;
    if (sindicato == 1) {
        if (MQ == 1) {
            contrib_sindicato = valor * 0.033;
        } 
        else if (MQ == 2) {
            contrib_sindicato = valor * 0.066;
        }
        printf("Valor do sindicato a ser descontado: %.2f\n", contrib_sindicato);
    }
    
    // Cálculo do FGTS
    FGTS = valor * 0.08;
    
    // Cálculo do salário final
    Salario_final = valor + vale - imposto - INSS - contrib_sindicato - desconto_transporte;
    
    printf("\nResumo Final:\n");
    printf("Salario base: %.2f\n", valor);
    printf("Vale alimentação: %.2f\n", vale);
    printf("Desconto IR: %.2f\n", imposto);
    printf("Desconto INSS: %.2f\n", INSS);
    printf("Desconto transporte: %.2f\n", desconto_transporte);
    printf("Contribuição sindical: %.2f\n", contrib_sindicato);
    printf("Salario líquido: %.2f\n", Salario_final);
    printf("FGTS depositado: %.2f\n", FGTS);

    return 0;
}

