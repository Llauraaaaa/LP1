#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char op1, op2;
    int operacoes;

    printf("Quantas operacoes deseja fazer (2-4)? ");
    scanf("%d", &operacoes);

    if(operacoes < 2 || operacoes > 4) {
        printf("Numero de operacoes invalido! Use entre 2 e 4.\n");
        return 1;
    }

    printf("\nDigite a expressao: ");
    
    if(operacoes == 2) {
        scanf("%lf %c %lf", &num1, &op1, &num2);
        
        
    switch(op1) {
        case '+': resultado = num1 + num2; break;
        case '-': resultado = num1 - num2; break;
        case '*': resultado = num1 * num2; break;
        case '/': 
    if(num2 == 0) {
        printf("Erro: Divisao por zero!\n");
            return 1;
    }
    resultado = num1 / num2; 
        break;
            default:
        printf("Operador invalido!\n");
            return 1;
        }
    }
    else if(operacoes == 3) {
        double num3;
        scanf("%lf %c %lf %c %lf", &num1, &op1, &num2, &op2, &num3);
        
        // Verifica precedencia
    if((op2 == '*' || op2 == '/') && (op1 == '+' || op1 == '-')) {
        // Faz a segunda operação primeiro
    switch(op2) {
        case '*': resultado = num2 * num3; break;
        case '/': 
    if(num3 == 0) {
        printf("Erro: Divisao por zero!\n");
            return 1;
        }
        
    resultado = num2 / num3; 
        break;
    }
    // Agora faz a primeira operação
        switch(op1) {
            case '+': resultado = num1 + resultado; break;
            case '-': resultado = num1 - resultado; break;
        }
    }else {
    // Faz na ordem normal
        switch(op1) {
            case '+': resultado = num1 + num2; break;
            case '-': resultado = num1 - num2; break;
            case '*': resultado = num1 * num2; break;
            case '/': 
            if(num2 == 0) {
                printf("Erro: Divisao por zero!\n");
                    return 1;
                    }
    resultado = num1 / num2; 
        break;
    }
    // Segunda operação
        switch(op2) {
            case '+': resultado += num3; break;
            case '-': resultado -= num3; break;
            case '*': resultado *= num3; break;
            case '/': 
        if(num3 == 0) {
            printf("Erro: Divisao por zero!\n");
                return 1;
                }
    resultado /= num3; 
        break;
            }
        }
    }

    printf("\nResultado: %.2lf\n", resultado);
    return 0;
}