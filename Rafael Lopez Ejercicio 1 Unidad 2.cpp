#include <stdio.h>

int main() {
    float numero;
    float mitad;
    float Quintaparte;
    float resultado;

    printf("Escriba un numero: \n");
    scanf("%f", &numero);

    mitad = numero / 2;
    Quintaparte = numero / 5;
    resultado = mitad + Quintaparte;

    printf("La mitad de %f mas su quinta parte es: %.2f\n", numero, resultado);

    return 0;
}
