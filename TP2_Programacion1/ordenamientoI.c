#include <stdio.h>

void Intercambio(int *posicion1, int *posicion2){

    int resultado = *posicion1;
    *posicion1 = *posicion2;
    *posicion2 = resultado;
}

void mostrarLista(int list[], int tamanio){
    for(int i = 0; i < tamanio; i++){
        printf("%d \n", list[i]);
    }
}

void seleccion(int lista[], int n){
    int i, j, min;
    for(i = 0; i < n-1; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            if(lista[j] < lista[min]){
                min = j;
            }   
        }
        Intercambio(&lista[min], &lista[i]);
    }
}

main() {
    int lista[] = {2, 4, 7, 9, 1};
    int n = sizeof(lista)/sizeof(lista[0]);

    seleccion(lista, n);
    printf("Array acomodado: \n");
    mostrarLista(lista, n);

}