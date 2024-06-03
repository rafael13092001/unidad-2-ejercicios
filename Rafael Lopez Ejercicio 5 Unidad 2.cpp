#include <stdio.h>
#include <math.h>

int main() {
    int numero1, numero2;
    int diferencia, resultado;

    printf("Escriba el primer numero: \n");
    scanf("%d", &numero1);
    printf("Escriba el segundo numero: \n");
    scanf("%d", &numero2);

    diferencia = numero1 - numero2;
    resultado = pow(diferencia, 2);

    printf("El cuadrado de la diferencia de los dos numeros es: %d", resultado);

    return 0;
}
