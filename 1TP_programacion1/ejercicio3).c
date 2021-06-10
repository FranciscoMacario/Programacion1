#include <stdio.h>

char minusculaAMayuscula(char);
char mayusculaAMinuscula(char);

main(){
    char letra;
    int eleccion;
    printf("Elija lo que desea hacer: \n 1 Pasar a Mayusculas \n 2 Pasar a Minuscula \n");
    scanf("%d", &eleccion);
    fflush(stdin);

    printf("Ingrese una letra: ");
    scanf("%c", &letra);
    fflush(stdin);

    if(eleccion == 1){                               //intente hacerlo con un switch pero me daba error
        minusculaAMayuscula(letra);
    } else {
        if(eleccion == 2){
            mayusculaAMinuscula(letra);
        } else {
            printf("No ingreso una opcion correcta");
        }
    }

}

char minusculaAMayuscula(char c){
    if(c >= 'a' && c <= 'z'){            
        c = c - 'a' + 'A';               
        printf("Su letr es: %c \n", c);
    } else {
        printf("Caracter Incorrecto");
    }
}

char mayusculaAMinuscula(char d){
    if (d >= 'A' && d <= 'Z'){
        d = d - 'A' + 'a';
        printf("Su letra es %c \n", d);
    } else {
        printf("Caracter Incorrecto");
    }
}