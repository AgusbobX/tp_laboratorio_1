#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
int main()
{
    int A, B;
    int banderaA = 0, banderaB = 0;
    int opcion;
    int continuar = 0;
    int mostrarValores = 0;
    char cerrar;

    while (continuar == 0) {
        // INICIO CALCULADORA
        printf("        ######     ###    ##        ######  ##     ## ##          ###    ########   #######  ########     ###    \n");
        printf("       ##    ##   ## ##   ##       ##    ## ##     ## ##         ## ##   ##     ## ##     ## ##     ##   ## ##   \n");
        printf("       ##        ##   ##  ##       ##       ##     ## ##        ##   ##  ##     ## ##     ## ##     ##  ##   ##  \n");
        printf("       ##       ##     ## ##       ##       ##     ## ##       ##     ## ##     ## ##     ## ########  ##     ## \n");
        printf("       ##       ######### ##       ##       ##     ## ##       ######### ##     ## ##     ## ##   ##   ######### \n");
        printf("       ##    ## ##     ## ##       ##    ## ##     ## ##       ##     ## ##     ## ##     ## ##    ##  ##     ## \n");
        printf("        ######  ##     ## ########  ######   #######  ######## ##     ## ########   #######  ##     ## ##     ## \n\n");
        printf("       **********************************************************************************************************\n");
        printf("       **********************************************************************************************************\n\n");
        if (mostrarValores == 0) {
        printf("       1. Ingrese el 1er operando\n");
        printf("       2. Ingrese el 2do operando\n");
    } else {
        printf("       1. Ingrese el 1er operando (Valor A = [%d])\n",A);
        printf("       2. Ingrese el 2do operando (Valor B = [%d])\n",B);
    }
    printf("       3. Calcule todas las operaciones\n");
    printf("       4. Informar resultados\n");
    printf("       5. Salir\n\n");
    printf("       **********************************************************************************************************\n");
    printf("       **********************************************************************************************************\n\n");
        // TERMINA INICIO CALCULADORA
    printf("       Ingrese que desea hacer: ");
    scanf("%d",&opcion);
    switch(opcion) {
        case 1:
            printf("       Ingrese el 1er operando: ");
            scanf("%d",&A);
            banderaA = 1;
            break;
        case 2:
            printf("       Ingrese el 2do operando: ");
            scanf("%d",&B);
            banderaB = 1;
            break;
        case 3:
            if (banderaA == 1  && banderaB == 1) {
                printf("       Usted ha calculado los valores con exito.\n       Presiona ENTER para continuar");
                getch();
                mostrarValores = 1;
            } else {
            printf("       Usted no ha ingresado todos los operandos, por favor, reingrese el operando.\n       Presiona ENTER para continuar");
            getch();
            }
            break;
        case 4:
            if (banderaA == 1 && banderaB == 1 && mostrarValores == 0) {
            printf("       Usted no ha calculado los valores, por favor, calcule los valores.\n       Presiona ENTER para continuar");
            getch();
            } else if (banderaA == 0 || banderaB == 0) {
            printf("       Usted no ha ingresado todos los operandos, por favor, reingrese el operando.\n       Presiona ENTER para continuar");
            getch();
            }
            if (mostrarValores == 1) {
                sumar(A,B);
                resta(A,B);
                multiplicacion(A,B);
                division(A,B);
                factorialX(A);
                factorialY(B);
                getch();
                banderaA = 0;
                banderaB = 0;
                mostrarValores = 0;
            }
            break;
        case 5:
            printf("       Estas seguro que desea salir? Ingrese [y] para salir: ");
            scanf("%s",&cerrar);
            if (cerrar == 'y') {
                continuar = 1;
            }
            break;
        default:
            printf("       Ha ingresado un numero erroneo. Vuelva a ingrear un numero entre (1-5).\n \n       Presiona ENTER para continuar");
            getch();
            break;
    }
            system("cls");
        }
    return 0;
}
