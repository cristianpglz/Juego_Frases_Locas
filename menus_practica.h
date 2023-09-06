
/*
    CURSO MASTERMIND

  Comienzo de La Practica:

  Titulo: FRASES LOCAS
*/

#ifndef MENUS_PRACTICA_H

// Definiciones
#define MENUS_PRACTICA_H
#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

// Inclusiones
#include "proceso_frases_practica.h"
#include <stdio.h>
#include <stdlib.h>

// Estructura en menus_practica.c
void menuprincipal();
void subMenuPrincipal();
void agregarPalabra(int categoria, const char *palabra);
void MenuComienzoJuego();
void verPalabrasEnLista(); 

#endif // MENUS_PRACTICA_H
