#include <stdio.h>

int main() {
    int PATRAO_FUNCIONARIO = 0;  
    
    printf("Voce é patrão ou funcionario? se for patrão, digite (1), se for funcionario digite (2) \n");
    scanf("%d", &PATRAO_FUNCIONARIO);  
    
    if (PATRAO_FUNCIONARIO == 1) {
        // SEÇÃO DO PATRÃO
        float lucro_mensal = 0, lucro_trimestral = 0, lucro_anual = 0;
        float IRPJ = 0, CSLL = 0, PIS = 0, COFINS = 0, ISS = 0;
        float faixa1 = 1888.60, faixa2 = 2542.93, faixa3 = 3288.85, faixa4 = 4207.86, acima_faixa = 5000.00;
        float total_salarios = 0, fgts = 0, inss_patronal = 0;
        int qtd_funcionarios = 0, qtd_faixa1 = 0, qtd_faixa2 = 0, qtd_faixa3 = 0, qtd_faixa4 = 0, qtd_acima = 0;

        printf("Digite o seu lucro mensal: ");
        scanf("%f", &lucro_mensal);
        printf("Digite o seu lucro trimestral: ");
        scanf("%f", &lucro_trimestral);
        printf("Digite o seu lucro anual: ");
        scanf("%f", &lucro_anual);
        
        // Cálculos tributários
        if(lucro_trimestral >= 60000) {
            IRPJ = lucro_trimestral * 0.15;
        } else {
            IRPJ = lucro_trimestral * 0.10;
        }
        
        CSLL = lucro_trimestral * 0.09;
        PIS = lucro_mensal * 0.0065;
        COFINS = lucro_mensal * 0.04;
        ISS = lucro_mensal * 0.05;
        
        printf("\n--- Tributos Empresariais ---\n");
        printf("Imposto de Renda trimestral: %.2f\n", IRPJ);
        printf("Contribuição Social sobre Lucro Líquido: %.2f\n", CSLL);
        printf("Programa de Integração Social: %.2f\n", PIS);
        printf("COFINS: %.2f\n", COFINS);
        printf("Imposto Sobre Serviços: %.2f\n", ISS);
        
        // Dados dos funcionários
        printf("\nDigite a quantidade total de funcionarios: ");
        scanf("%d", &qtd_funcionarios);
        
        printf("\nDistribuição por faixa salarial:\n");
        printf("Quantidade de funcionarios que recebe um salario minimo: ");
        scanf("%d", &qtd_faixa1);
        printf("Quantidade que recebe entre 1.518 e 2.259,20: ");
        scanf("%d", &qtd_faixa2);
        printf("Quantidade que recebe entre 2.259,20 e 2.826,65: ");
        scanf("%d", &qtd_faixa3);
        printf("Quantidade que recebe entre 2.826,65 e 3.751,05: ");
        scanf("%d", &qtd_faixa4);
        printf("Quantidade que recebe mais de 4.664,68: ");
        scanf("%d", &qtd_acima);
        
        // Cálculos trabalhistas
        total_salarios = (qtd_faixa1 * 1518) + (qtd_faixa2 * faixa1) + 
                        (qtd_faixa3 * faixa2) + (qtd_faixa4 * faixa3) + 
                        (qtd_acima * acima_faixa);
        
        fgts = total_salarios * 0.08;
        inss_patronal = total_salarios * 0.20;

        printf("Total de salarios: R$ %.2f\n", total_salarios);
        printf("FGTS (8%%): R$ %.2f\n", fgts);
        printf("INSS Patronal (20%%): R$ %.2f\n", inss_patronal);
        printf("Total de encargos: R$ %.2f\n", fgts + inss_patronal);
        
    } else if (PATRAO_FUNCIONARIO == 2) {
        // SEÇÃO DO FUNCIONÁRIO
        float salario = 0, vale_alimentacao = 0;
        int tem_transporte = 0, contribui_sindicato = 0, tipo_pagamento = 0;
        float imposto_renda = 0, inss = 0, desconto_transporte = 0, contrib_sindicato = 0;
        float salario_liquido = 0, fgts = 0;
        
        printf("Digite o seu salario: ");
        scanf("%f", &salario);
        printf("Digite o valor do vale alimentação: ");
        scanf("%f", &vale_alimentacao);
        printf("Tem vale transporte? (1-Sim / 2-Não): ");
        scanf("%d", &tem_transporte);
        printf("Contribui com sindicato? (1-Sim / 2-Não): ");
        scanf("%d", &contribui_sindicato);
        printf("Pagamento é mensal(1) ou quinzenal(2)? ");
        scanf("%d", &tipo_pagamento);
        
        // Cálculo IR
        if (salario <= 1518) {
            printf("\nVoce recebe salario minimo (isento de IR)\n");
            imposto_renda = 0;
        } else if (salario < 2259.20) {
            printf("\nVoce não paga imposto de renda\n");
            imposto_renda = 0;
        } else if (salario <= 2826.65) {
            imposto_renda = salario * 0.075;
        } else if (salario <= 3751.05) {
            imposto_renda = salario * 0.15;
        } else if (salario <= 4664.68) {
            imposto_renda = salario * 0.225;
        } else {
            imposto_renda = salario * 0.275;
        }
        
        // Cálculo INSS
        if (salario <= 1518) {
            inss = salario * 0.08;
        } else if (salario <= 2793.88) {
            inss = salario * 0.09;
        } else if (salario <= 4190.83) {
            inss = salario * 0.12;
        } else if (salario <= 8157.41) {
            inss = salario * 0.14;
        } else {
            inss = 8157.41 * 0.14;  // Teto do INSS
        }
        
        // Cálculo transporte
        if (tem_transporte == 1) {
            desconto_transporte = salario * 0.06;
        }
        
        // Cálculo sindicato
        if (contribui_sindicato == 1) {
            if (tipo_pagamento == 1) {
                contrib_sindicato = salario * 0.033;
            } else {
                contrib_sindicato = salario * 0.066;
            }
        }
        
        // Cálculos finais
        fgts = salario * 0.08;
        salario_liquido = salario + vale_alimentacao - imposto_renda - inss - contrib_sindicato - desconto_transporte;
        
        printf("Salario bruto: R$ %.2f\n", salario);
        printf("Vale alimentação: R$ %.2f\n", vale_alimentacao);
        printf("Descontos:\n");
        printf("IRRF: R$ %.2f\n", imposto_renda);
        printf("INSS: R$ %.2f\n", inss);
        printf("Vale transporte: R$ %.2f\n", desconto_transporte);
        printf("Contribuição sindical: R$ %.2f\n", contrib_sindicato);
        printf("Salario líquido: R$ %.2f\n", salario_liquido);
        printf("FGTS depositado: R$ %.2f\n", fgts);
        
    } else {
        printf("Opção inválida! Digite 1 para patrão ou 2 para funcionario.\n");
    }

    return 0;
}