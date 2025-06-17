#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    int Variavel_1;
    float Variavel_2;
    double variavel_3;
    char variavel_4;
    long Variavel_5;
    short Variavel_6;
    signed Variavel_7;
    unsigned Variavel_8;

    printf("Tamanho máximo em bits de cada tipo:\n");

    printf("int Variavel_1: %zu bits\n", sizeof(Variavel_1) * 8);
    printf("float Variavel_2: %zu bits\n", sizeof(Variavel_2) * 8);
    printf("double variavel_3: %zu bits\n", sizeof(variavel_3) * 8);
    printf("char variavel_4: %zu bits\n", sizeof(variavel_4) * 8);
    printf("long Variavel_5: %zu bits\n", sizeof(Variavel_5) * 8);
    printf("short Variavel_6: %zu bits\n", sizeof(Variavel_6) * 8);
    printf("signed Variavel_7: %zu bits (equivalente a int)\n", sizeof(Variavel_7) * 8);
    printf("unsigned Variavel_8: %zu bits (equivalente a unsigned int)\n", sizeof(Variavel_8) * 8);

    printf("\nValores máximos e minimos:\n");
    
    printf("int: (%d a %d)\n", INT_MIN, INT_MAX);
    printf("float: (%e a %e)\n", FLT_MIN, FLT_MAX);
    printf("double:(%e a %e)\n", DBL_MIN, DBL_MAX);
    printf("char: (%d a %d)\n", CHAR_MIN, CHAR_MAX);
    printf("long: (%ld a %ld)\n", LONG_MIN, LONG_MAX);
    printf("short: (%d a %d)\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned int: (0 a %u)\n", UINT_MAX); //so armazena valores positivos

    return 0;
}