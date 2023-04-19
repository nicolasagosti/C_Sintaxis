#include <stdio.h> 
#include <stdlib.h>

int main(void){
        int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);
    printf("el Numero ingresado es %d \n", numero);

    int tabla[3][4];

    // Se puede acceder a los elementos de la tabla utilizando índices
    int Ntabla = 0;
        for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 4; j++) {
                    tabla[i][j] = Ntabla;
                    Ntabla++;
                }
                
        }

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 4; j++) {
                printf("%d ", tabla[i][j]);
            }
            printf("\n"); // Se agrega un salto de línea para separar las filas de la tabla
        }

}