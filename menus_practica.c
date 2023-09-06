
/*
    CURSO MASTERMIND

  Comienzo de La Practica:

  Titulo: FRASES LOCAS
*/

// Inclusiones
#include "menus_practica.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// importar Frases Temporales
extern ListaPalabras nombres_temporales;
extern ListaPalabras verbos_temporales;
extern ListaPalabras adjetivos_temporales;
extern ListaPalabras sectores_temporales;
extern ListaPalabras acompanantes_temporales;


//Comienzo de Menus y Categorias

// Menu principal
    void menuprincipal() {
        int opcion = 0;
        printf("Bienvenido a Frases Locas\n");
        while (opcion != 1) {
            printf("1. Jugar\n");
            printf("2. Salir\n"); // Agrega una opción para salir
            printf("Escribe el Numero y presiona Enter:");
            scanf("%d", &opcion);
            getchar();  // Consumir el salto de línea en el buffer

            if (opcion == 1) {
                subMenuPrincipal();
            } else if (opcion == 2) {
                printf("Gracias Por Jugar");
                exit(0);
            } else {
                printf("Opcion no Valida!\n");
            }
        }
    }

//Menu Secundario
    void subMenuPrincipal() {
        int opcion = 0;

        while (opcion != 4) {
            printf("\nMenu Principal:\n");
            printf("1. Ver palabras en listas\n");
            printf("2. Agregar palabra\n");
            printf("3. Generar frases aleatorias\n");
            printf("4. Salir\n");
            printf("Elige una Opcion: ");
            scanf("%d", &opcion);
            getchar(); // Consumir el salto de línea en el buffer

            switch (opcion) {
                case 1:
                    verPalabrasEnLista();
                    break;
                case 2:
                    MenuComienzoJuego();
                    break;
                case 3:
                    generarFrasesAleatorias();
                    break;
                case 4:
                    printf("Gracias por Jugar\n");
                    exit(0);
                default:
                    printf("Opcion Invalida\n");
                    break;
            }
        }
    }

// Agregar Cada Palabra a su Lista
    void agregarPalabra(int categoria, const char *palabra) {
        switch (categoria) {
            case 1:
                agregarPalabraLista(&nombres_temporales, palabra);
                break;
            case 2:
                agregarPalabraLista(&verbos_temporales, palabra);
                break;
            case 3:
                agregarPalabraLista(&adjetivos_temporales, palabra);
                break;
            case 4:
                agregarPalabraLista(&sectores_temporales, palabra);
                break;
            case 5:
                agregarPalabraLista(&acompanantes_temporales, palabra);
                break;
            default:
                printf("Categoria Invalida\n");
                break;
        }
    }

// Menu Para Agregar la Palabra
    void MenuComienzoJuego() {
        int opcion = 0;
        printf("\nDonde quieres agregar la palabra?\n");
        printf("1. Nombres\n");
        printf("2. Verbos\n");
        printf("3. Adjetivos\n");
        printf("4. Sectores especificos\n");
        printf("5. Acompanantes\n"); 
        printf("6. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);
        getchar();// Consumir el salto de línea en el buffer

        char palabra[MAX_WORD_LENGTH];
        printf("Ingresa la palabra: ");
        fgets(palabra, sizeof(palabra), stdin);
        palabra[strcspn(palabra, "\n")] = '\0';

        switch (opcion) {
            case 1:
                agregarPalabra(1, palabra);
                break;
            case 2:
                agregarPalabra(2, palabra);
                break;
            case 3:
                agregarPalabra(3, palabra);
                break;
            case 4:
                agregarPalabra(4, palabra);
                break;
            case 5:
                agregarPalabra(5, palabra); 
                break;
            case 6:
                // Salir
                break;
            default:
                printf("Opcion invalida\n");
                break;
        }
        // Mostrar Las Frases
        generarFrasesAleatorias();
        
    }

// Ver Palabras en Cada Lista
    void verPalabrasEnLista() {
        int opcion;
        printf("\nVer palabras en la lista:\n");
        printf("1. Nombres\n");
        printf("2. Verbos\n");
        printf("3. Adjetivos\n");
        printf("4. Sectores especificos\n");
        printf("5. Volver al menu anterior\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);
        getchar(); // Consumir el salto de línea en el buffer

        switch (opcion) {
            case 1:
                mostrarLista(nombres_temporales);
                break;
            case 2:
                mostrarLista(verbos_temporales);
                break;
            case 3:
                mostrarLista(adjetivos_temporales);
                break;
            case 4:
                mostrarLista(sectores_temporales);
                break;
            case 5:
                // Volver al menú anterior
                break;
            default:
                printf("Opcion invalida\n");
                break;
        }
    }
