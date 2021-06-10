#include <stdio.h>
//calcular volumen y area de un prisma
main() {
    float ancho, alto, profundidad, volumen, area, perimetro;

    //pedir datos
    printf("Ingrese el ancho: \n");
    scanf("%f", &ancho);
    printf("Ingrese el alto del prisma: \n");
    scanf("%f", &alto);
    printf("Ingrese la profundidad de el prisma: \n");
    scanf("%f", &profundidad);
    
    //calcular volumen((ancho*alto) * altura)
    volumen = (ancho*alto)*profundidad;
    printf("Volumen del prisma: %.2f cm3\n", volumen);
    //calcular area (2*(ancho*alto)*(2*ancho + 2*alto)*profundidad)
    perimetro = 2*(ancho * alto);
    area = perimetro * (ancho + alto)*2*profundidad;
    printf("El area del prisma es: %.2f cm2\n", area);
}
