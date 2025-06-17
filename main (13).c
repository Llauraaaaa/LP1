#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    
    printf(" Tamanho em bytes INT : %zu\n", sizeof(int));
    printf(" Tamanho em bytes CHAR : %zu\n", sizeof(char));
    printf(" Tamanho em bytes DOUBLE: %zu\n", sizeof(double));
    printf(" Tamanho em bytes FLOAT: %zu\n\n", sizeof(float));
    
    // Tipos inteiros
    printf("CHAR:\n");
    printf(" Mínimo: %d\n", CHAR_MIN);
    printf(" Máximo: %d\n\n", CHAR_MAX);

    printf("UNSIGNED CHAR:\n");
    printf(" Máximo: %u\n", UCHAR_MAX);
    printf(" Mínimo: %u\n\n", 0);
    
    printf("SIGNED CHAR: \n");
    printf(" Máximo: %d\n", SCHAR_MAX);
    printf(" Mínimo: %d\n\n", SCHAR_MIN);
    
    printf("INT:\n");
    printf(" Máximo: %d\n", INT_MAX);
    printf(" Mínimo: %d\n\n", INT_MIN);
    
    printf("SHORT INT: \n");
    printf(" Mínimo: %d\n", SHRT_MIN);
    printf(" Máximo: %d\n\n", SHRT_MAX);
    
    printf("LONG INT: \n");
    printf("  Mínimo: %ld\n", LONG_MIN);
    printf("  Máximo: %ld\n\n", LONG_MAX);
    
    printf("UNSIGNED INT: \n");
    printf("  Mínimo: 0\n");
    printf("  Máximo: %u\n\n", USHRT_MAX);
    
    printf("DOUBLE: \n");
    printf(" Mínimo: %f\n", DBL_MIN);
    printf(" Máximo: %f\n\n", DBL_MAX);
    
    printf("SHORT DOUBLE: \n");
    printf("  Mínimo: %.0f\n", (double)SHRT_MIN);
    printf("  Máximo: %.0f\n\n", (double)SHRT_MAX);

    printf("UNSIGNED LONG: \n");
    printf("  Mínimo: %.0f\n", 0.0);
    printf("  Máximo: %.0f\n\n", (double)USHRT_MAX);

    printf("LONG DOUBLE: \n");
    printf("  Mínimo: %.0f\n", (double)LONG_MIN);
    printf("  Máximo: %.0f\n\n", (double)LONG_MAX);

    printf("UNSIGNED LONG: \n");
    printf("  Mínimo: %.0f\n", 0.0);
    printf("  Máximo: %.0f\n\n", (double)ULONG_MAX);
    
    printf("SIGNED DOUBLE: \n");
    printf("  Mínimo: %.0f\n", (double)INT_MIN);
    printf("  Máximo: %.0f\n\n", (double)INT_MAX);
    
    printf("FLOAT: \n");
    printf(" Mínimo: %f\n", FLT_MIN);
    printf(" Máximo: %f\n\n", FLT_MAX);
    
    printf("LONG FLOAT: \n");
    printf(" Mínimo: %ld\n", LONG_MIN);
    printf(" Máximo: %ld\n\n", LONG_MAX);
    
    printf("SHORT FLOAT: \n");
    printf(" Mínimo: %d\n", SHRT_MIN);
    printf(" Máximo: %d\n", SHRT_MAX);
    
    


    


    return 0;
}
