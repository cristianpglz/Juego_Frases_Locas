
/*
    CURSO MASTERMIND

  Comienzo de La Practica:

  Titulo: FRASES LOCAS
*/

// Inclusiones
#include "proceso_frases_practica.h"

// Definir Frases Temporales
ListaPalabras nombres_temporales;
ListaPalabras verbos_temporales;
ListaPalabras adjetivos_temporales;
ListaPalabras sectores_temporales;
ListaPalabras acompanantes_temporales;

// Categorizar Las Frases Originales
const char *nombresOriginales[] = {"Carlos", "Maria", "perro", "gato", "elefante"};
const char *verbosOriginales[] = {"corrio", "salto", "nado", "bailo", "canto"};
const char *adjetivosOriginales[] = {"feliz", "grande", "pequeno", "rapido", "brillante"};
const char *sectoresEspecificosOriginales[] = {"computadora", "ciencia", "cocina", "arte", "deporte"};
const char *acompanantesOriginales[] = {"con", "de", "en", "que", "segun"};

// Inicio de la Modificacion de Frases y Listas


// Inicio de la Lista
    void inicializarListas() {
        nombres_temporales.total = 0;
        verbos_temporales.total = 0;
        adjetivos_temporales.total = 0;
        sectores_temporales.total = 0;
        acompanantes_temporales.total = 0;
    }


// Agregar Palabras a sus Listas
    void agregarPalabraLista(ListaPalabras *lista, const char *palabra) {
        if (lista->total < MAX_WORDS) {
            strcpy(lista->palabras[lista->total], palabra);
            lista->total++;
        } else {
            printf("Lista LLena.\n");
        }
    }


// Mostrar Palabras de la Lista al Usuario
    void mostrarLista(ListaPalabras lista) {
        if (lista.total == 0) {
            printf("\nNo hay palabras en esta categoria.\n");
        } else {
            printf("\nTotal de palabras en la lista: %d\n", lista.total);
            for (int indicePalabra = 0; indicePalabra < lista.total; indicePalabra++) {
                printf("%s\n", lista.palabras[indicePalabra]);
            }
        }
    }

// Generar las Frases Aleatoriamente
    void generarFrasesAleatorias() {
        srand(time(NULL)); // Inicializar generador de números aleatorios con el tiempo actual

        printf("\nGenerando Frases Aleatorias:\n");

        for (int numeroFrase = 1; numeroFrase <= 5; numeroFrase++) {
            const char *nombre = nombres_temporales.total > 0
                                    ? nombres_temporales.palabras[rand() % nombres_temporales.total]
                                    : nombresOriginales[rand() % (sizeof(nombresOriginales) / sizeof(nombresOriginales[0]))];

            const char *verbo = verbos_temporales.total > 0
                                    ? verbos_temporales.palabras[rand() % verbos_temporales.total]
                                    : verbosOriginales[rand() % (sizeof(verbosOriginales) / sizeof(verbosOriginales[0]))];

            const char *adjetivo = adjetivos_temporales.total > 0
                                    ? adjetivos_temporales.palabras[rand() % adjetivos_temporales.total]
                                    : adjetivosOriginales[rand() % (sizeof(adjetivosOriginales) / sizeof(adjetivosOriginales[0]))];

            const char *sector = sectores_temporales.total > 0
                                    ? sectores_temporales.palabras[rand() % sectores_temporales.total]
                                    : sectoresEspecificosOriginales[rand() % (sizeof(sectoresEspecificosOriginales) / sizeof(sectoresEspecificosOriginales[0]))];

            const char *acompanante = acompanantes_temporales.total > 0
                                        ? acompanantes_temporales.palabras[rand() % acompanantes_temporales.total]
                                        : acompanantesOriginales[rand() % (sizeof(acompanantesOriginales) / sizeof(acompanantesOriginales[0]))];

            // Ordenar palabras para tener más coherencia
            const char *palabrasOrdenadas[] = {nombre, verbo, acompanante, adjetivo, sector};

            printf("\nFrase %d: ", numeroFrase);
            for (int indicePalabra = 0; indicePalabra < 5; indicePalabra++) {
                printf("%s ", palabrasOrdenadas[indicePalabra]);
            }
            printf("\n");
        }
    }
