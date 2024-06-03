#include <stdio.h>

int main() {
    int numero1, numero2;
    int suma, resultado;

    printf("Escriba el primer numero: \n");
    scanf("%d", &numero1);
    printf("Escriba el segundo numero: \n");
    scanf("%d", &numero2);

    suma = numero1 + numero2;
    resultado = suma * suma;

    printf("El cuadrado de la suma de los dos numeros es: %d", resultado);

    return 0;
}
