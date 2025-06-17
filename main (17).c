#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6, a, b, c, d, e, f;
    int tentativas = 0;

    // Entrada dos números pelo usuário
    printf("Digite o primeiro numero (0-60): ");
    scanf("%d", &n1);
    printf("Digite o segundo numero (0-60): ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero (0-60): ");
    scanf("%d", &n3);
    printf("Digite o quarto numero (0-60): ");
    scanf("%d", &n4);
    printf("Digite o quinto numero (0-60): ");
    scanf("%d", &n5);
    printf("Digite o sexto numero (0-60): ");
    scanf("%d", &n6);
    

    printf("\nAdivinhando a sequencia...\n");

    // Loop para testar todas as combinações de 3 dígitos (0 a 9)
    for (a = 0; a <= 60; a++) {
        for (b = 0; b <= 60; b++) {
            if(b == a) continue; 
            for (c = 0; c <= 60; c++) {
                if(c == a || c == b) continue;
                for (d = 0; d <= 60; d++) {
                    if(d == a || d == b || d == c) continue;
                    for (e = 0; e <= 60; e++) {
                        if(e == a || e == b || e == c || e == d) continue;
                        for (f = 0; f <= 60; f++){
                            if(f == a || f == b || f == c || f == d || f == e) continue;
                tentativas++;
                if (a == n1 && b == n2 && c == n3 && d == n4 && e == n5 && f == n6) {
                    printf("Sequencia encontrada: %d %d %d %d %d %d\n", a, b, c, d, e, f);
                    printf("Tentativas: %d\n", tentativas);
                    
                    return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
