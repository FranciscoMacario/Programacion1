#include<stdio.h>
/*
Poder ingresar una fecha (dia, mes, año)
Determinar:
Si es una fecha valida
Si es año bisiesto o no
La cantidad de dias que falta para finde mes
*/

void contadorDia(int, int, int);

int validacionDia(int);

int validacionMes(int);

int anioBiciesto(int);

int validacionDia(int dia){
    if(dia > 31){
        return 1;
    } else {
        return 0;
    }
}

int validacionMes(int mes){
    if(mes > 12 || mes < 1){
        return 1;
    } else {
        return 0;
    }
}

int anioBiciesto(int anio){
    int resultado;
    if(anio%4 == 0 && anio%100 != 0 || anio%400 == 0){
        resultado = 1;
        return resultado;
    } else {
        resultado = 0;
        return resultado;
    }
}

void contadorDia (int mes, int dia, int anio){
    int restoDias;
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        restoDias = 31;
        restoDias = restoDias - dia;
        printf("Faltan %d dias para finde mes \n", restoDias);
    } else {
        if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            restoDias = 30;
            restoDias = restoDias - dia;
            printf("Faltan %d dias para finde mes \n", restoDias);
        } else {
            if(mes == 2){
                if(anioBiciesto(anio) == 1){
                    restoDias = 29;
                    restoDias = restoDias - dia;
                    printf("Faltan %d dias para finde mes \n", restoDias);
                } else {
                    restoDias = 28;
                    restoDias = restoDias - dia;
                    printf("Faltan %d dias para finde mes \n", restoDias);
                }
            }
        }
    }
}

main() {
    int dia, mes, anio;

    printf("Ingresa el dia: ");
    scanf("%d", &dia);
    printf("Ingrese el mes: ");
    scanf("%d", &mes);
    printf("Ingrese el anio: ");
    scanf("%d", &anio);

    if(validacionDia(dia) == 1 || validacionMes(mes) == 1){
        printf("Fecha invalida");
    } else {
        printf("Fecha valida \n");
        printf("%d/%d/%d \n", dia, mes, anio);
        contadorDia(mes, dia, anio);
    }

    if(anioBiciesto(anio) == 1){
        printf("Es un anio biciesto \n");
    } else {
        printf("No es anio biciesto \n");
    }
}