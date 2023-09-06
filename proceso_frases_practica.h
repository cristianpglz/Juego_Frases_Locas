
/*
    CURSO MASTERMIND

  Comienzo de La Practica:

  Titulo: FRASES LOCAS
*/

#ifndef PROCESO_FRASES_PRACTICA_H
// Definiciones
#define PROCESO_FRASES_PRACTICA_H
#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50
// Inclusiones
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Definir Frases Originales
extern const char *nombresOriginales[];
extern const char *verbosOriginales[];
extern const char *adjetivosOriginales[];
extern const char *sectoresEspecificosOriginales[];

// Estructura para almacenar palabras temporales
typedef struct {
    char palabras[MAX_WORDS][MAX_WORD_LENGTH];
    int total;
} ListaPalabras;

// Estructura en proceso_frases_practica.c
void inicializarListas();
void agregarPalabraLista(ListaPalabras *lista, const char *palabra);
void mostrarLista(ListaPalabras lista);
void generarFrasesAleatorias();




#endif // PROCESO_FRASES_PRACTICA_H
