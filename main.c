#include <stdio.h>

void main() {

    float preciodolar;
    float precioeuro;
    float pesos;

    printf("Ingrese el precio del Dolar: ");
    scanf("%f",&preciodolar);
    fflush(stdin);

    printf("Ingrese el precio del Euro: ");
    scanf("%f",&precioeuro);
    fflush(stdin);

    printf("Ingrese la cantidad de Pesos: ");
    scanf("%f",&pesos);
    fflush(stdin);

    printf("\n\nEl cambio a Dolares es U$D %f",pesos / preciodolar);
    printf("\n\nEl cambio a Euros es EUR %f",pesos / precioeuro);


}