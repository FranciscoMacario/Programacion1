#include <stdio.h>
/*
Luego ingresar la cantidad de horas de uso de cada computadora en el mes:
calcular el monto total recaudado por el cyber en el mes.
informar cual fue la computadora con menor cantidad de horas de uso y monto recaudado
por la misma.
*/

main(){
    int cantComp, precioHora, cantHoras, montoTotal = 0, compMenor, compMontoMenor = 0, min = 24;

    printf("Ingrese la cantidad de computadoras que posee: ");
    scanf("%d", &cantComp);
    fflush(stdin);
    printf("Ingrese el precio por hora: ");
    scanf("%d", &precioHora);
    fflush(stdin);

    for(int i = 0; i < cantComp; i++){
        printf("Ingrese la cantidad de horas de uso de la pc nro[%d]:\t", i + 1);
        scanf("%d", &cantHoras);
        fflush(stdin);

        montoTotal = montoTotal + (cantHoras*precioHora);

        if(cantHoras < min){
            min = cantHoras;
            compMenor = i + 1;
            compMontoMenor = compMontoMenor + (cantHoras*precioHora);
        }
    }

    printf("Total recaudado: $%d \n", montoTotal);
    printf("Computadora con menos horas de uso #%d \n con: %d horas \n con un monto total de: $%d \n", compMenor, min, compMontoMenor);

}