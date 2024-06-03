#include <stdio.h>

int main() {
    int x, y, z;
    int cuadradoX, cuadradoY, cuboZ;
    int resultado;

    printf("Escriba el valor de x: \n");
    scanf("%d", &x);
    printf("Escriba el valor de y: \n");
    scanf("%d", &y);
    printf("Escriba el valor de z: \n");
    scanf("%d", &z);

    cuadradoX = x * x;
    cuadradoY = y * y;
    cuboZ = z * z * z;

    resultado = cuadradoX + cuadradoY + cuboZ;

    printf("El resultado de calcular el cuadrado de x mas el cuadrado de y mas el cubo de z es: %d", resultado);

    return 0;
}
