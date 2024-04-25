#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int cargarArreglosParalelos(int dim, int dim2, int legajos[dim], char nombres[dim][dim2], int anios[dim]);
void mostrarArreglosParalelos(int dim, int dim2, int legajos[dim], char nombres[dim][dim2], int anios[dim], int validos);
int datoABuscar();
int buscarPocisionEnNumeroDeLegajo(int dim, int legajos[dim], int validos, int datoABuscar);
void buscarnombrePorPosicion(int dim, int dim2, char nombres[dim][dim2], int posicionDePalabra);
void mostrarArreglosUnoAUno(int dim, int dim2, int legajos[dim], char nombres[dim][dim2], int anios[dim], int validos);

int main()
{
    int dim = 20;
    int dim2 = 30;
    int legajos[dim];
    char nombres[dim][dim2];
    int anios[dim];

    ///Ejericicio 1
    int validos = cargarArreglosParalelos(dim, dim2, legajos, nombres, anios);
    //mostrarArreglosParalelos(dim, dim2, legajos, nombres, anios, validos);

    ///Ejericicio 2
    //int dato = datoABuscar();

    //int pocision = buscarPocisionEnNumeroDeLegajo(dim, legajos, validos, dato);

    ///Ejericicio 3
    //buscarnombrePorPosicion(dim, dim2, nombres, pocision);

    ///Ejercicio 4
    mostrarArreglosUnoAUno(dim, dim2, legajos, nombres, anios, validos);

    return 0;
}
///Ejercicio 1
int cargarArreglosParalelos(int dim, int dim2, int legajos[dim], char nombres[dim][dim2], int anios[dim]){
    char control = 's';
    int i = 0;
    int dato = 0;
    int validos = 0;

    while(control == 's' && i < dim){
        printf("¿Que numero de legajo quiere cargar?\n");
        scanf("%d", &dato);
        legajos[i] = dato;

        printf("¿Ingrese el nombre del alumno?\n");
        fflush(stdin);
        gets(nombres[i]);

        printf("¿Ingrese los anios?\n");
        scanf("%d", &dato);
        anios[i] = dato;

        i++;
        validos++;
        printf("¿Quiere seguir cargando? presione s para seguir cargar\n");
        fflush(stdin);
        scanf("%c", &control);

    }

    return validos;
}

void mostrarArreglosParalelos(int dim, int dim2, int legajos[dim], char nombres[dim][dim2], int anios[dim], int validos){
    printf("Arreglo de legajos\n");
    for(int i = 0; i < validos; i++){
        printf("|%d|\n", legajos[i]);
    }

    printf("\nArreglo de nombres\n");
    for(int i = 0; i < validos; i++){
        puts(nombres[i]);
    }

    printf("Arreglo de anios\n");
    for(int i = 0; i < validos; i++){
        printf("|%d|\n", anios[i]);
    }
}
///Ejericicio 2
int buscarPocisionEnNumeroDeLegajo(int dim, int legajos[dim], int validos, int datoABuscar){
    int pocision = 0;

    for(int i = 0; i < validos; i++){
        if (legajos[i] == datoABuscar){
            pocision = i;
        }
    }
    return pocision;
}

int datoABuscar(){
    int dato = 0;
    printf("Ingrese que dato quiere buscar\n");
    scanf("%d", &dato);
    return dato;
}

///Ejericicio 3
void buscarnombrePorPosicion(int dim, int dim2, char nombres[dim][dim2], int posicionDePalabra){
    printf("El nombre que le pertenece al legajo \n");
    puts(nombres[posicionDePalabra]);
}

///Ejericicio 5
void mostrarArreglosUnoAUno(int dim, int dim2, int legajos[dim], char nombres[dim][dim2], int anios[dim], int validos){
    for(int i = 0; i < validos; i++){
        printf("Legajos: %d", legajos[i]);
        printf("\nNombres: ");
        puts(nombres[i]);
        printf("\nAnios: %d", anios[i]);
        printf("\n-------------------------\n");
    }
}
