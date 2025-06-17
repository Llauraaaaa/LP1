#include <stdio.h>

// Função para mover os cubos entre as pilastras
int mover_cubo(char* cubo, char* pilastra) {
    printf("Movendo o %s cubo para a %s pilastra\n", cubo, pilastra);
}

int main() {
    // Mover o primeiro cubo para a terceira pilastra
    mover_cubo("primeiro", "terceira");

    // Mover o segundo cubo para a segunda pilastra
    mover_cubo("segundo", "segunda");

    // Mover o primeiro cubo para a segunda pilastra
    mover_cubo("primeiro", "segunda");

    // Mover o terceiro cubo para a terceira pilastra
    mover_cubo("terceiro", "terceira");

    // Mover o primeiro cubo para a primeira pilastra
    mover_cubo("primeiro", "primeira");

    // Mover o segundo cubo para a terceira pilastra
    mover_cubo("segundo", "terceira");

    // Mover o primeiro cubo para a terceira pilastra
    mover_cubo("primeiro", "terceira");

    return 0;
}

