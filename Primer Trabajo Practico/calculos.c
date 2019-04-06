#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int sumar(int x, int y) {
    int resultado = x + y;
    printf("       El resultado de la suma es: %d\n",resultado);
    return resultado;
}
int resta(int x, int y) {
    int resultado = x - y;
    printf("       El resultado de la resta es: %d\n",resultado);
    return resultado;
}
int multiplicacion(int x, int y) {
    int resultado = x * y;
    printf("       El resultado de la multiplicacion es: %d\n",resultado);
    return resultado;
}
int division(int x, int y) {
    if (y == 0) {
        printf("       No se puede divir por cero, vuelva a ingresar un valor\n");
    } else {
    int resultado = x / y;
    printf("       El resultado de la division es: %d\n",resultado);
    return resultado;
}
}
int factorialX(int x) {
    int aux;
    if(x < 0) {
    printf("       No se puede factorear un numero negativo, vuelva a ingresar un valor");
    } else {
        printf("       Los factoriales de %d es: ",x);
        for(aux=1; aux <= x; aux++)
    {
        if (x%aux == 0 && (!(aux == x))) {
        printf("%d, ", aux);
        }
    }
    printf("%d.\n",x);
    }
    return 0;
}
int factorialY(int y) {
    int aux;
    if(y < 0) {
        printf("       No se puede factorear un numero negativo, vuelva a ingresar un valor");
    } else {
        printf("       Los factoriales de %d es: ",y);
        for(aux=1; aux <= y; aux++)
    {
        if (y%aux == 0 && (!(aux == y))) {
        printf("%d, ", aux);
        }
    }
    printf("%d.\n",y);
    }
    return 0;
}




