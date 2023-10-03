#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  

    int opcion;
    
    while (1) {  

        opcion = rand() % 4 + 1;  

        int num1 = rand() % 11; 
        int num2 = rand() % 11; 

        printf("Numero 1: %d\n", num1);
        printf("Numero 2: %d\n", num2);

        switch (opcion) {
            case 1:
                printf("Operacion: Suma\n");
                printf("Resultado de la suma: %d\n", num1 + num2);
                break;
            case 2:
                printf("Operacion: Resta\n");
                printf("Resultado de la resta: %d\n", num1 - num2);
                break;
            case 3:
                printf("Operacion: Multiplicacion\n");
                printf("Resultado de la multiplicacion: %d\n", num1 * num2);
                break;
            case 4:
                printf("Operacion: Division\n");
                if (num2 != 0) {
                    printf("Resultado de la division: %.2lf\n", (double)num1 / num2);
                } else {
                    printf("No se puede dividir por 0.\n");
                }
                break;
            default:
                printf("Opción no válida.\n");
                break;
        }

        printf("Presiona cualquier tecla para continuar o introduce '5' para salir: ");
        scanf("%d", &opcion);

        if (opcion == 5) {
            printf("Programa terminado.\n");
            break;  
        }
    }

    return 0;
}

