#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//#if defined QXD_ED_ANALISE
#include "01-analise/analise.h"

void do_tests(int num_elems) {
    int* array = malloc(sizeof(int)*num_elems);
    double miliseconds;

    // ------ InsertionSort
    fill_with_insertion_wc(array, num_elems);

    mark_time();
    insertion_sort(array, num_elems);
    miliseconds = mark_time();

    if(check_sorted_asc(array, num_elems)) {
        printf("\nOrdenado [InsertionSort] em %.0lf ms.\n", miliseconds);
    } else {
        fprintf(stderr, "[E] Ordenacao [InsertionSort] falhou.");
    }

    // ------ SelectionSort
    fill_with_selection_wc(array, num_elems);

    mark_time();
    selection_sort(array, num_elems);
    miliseconds = mark_time();

    if(check_sorted_asc(array, num_elems)) {
        printf("\nOrdenado [SelectionSort] em %.0lf ms.\n", miliseconds);
    } else {
        fprintf(stderr, "[E] Ordenacao [SelectionSort] falhou.");
    }

    free(array);
}

int main(int argc, char* argv[])
{
    int command;
    int num_elems = 0;
    unsigned seed = (unsigned) time(NULL);

    opterr = 0;

    // Determinar parâmetros da linha de comando
    while ((command = getopt (argc, argv, "n:s:")) != -1) {
        switch (command) {
        case 's': // semente do gerador aleatório
            seed = (unsigned) atoi(optarg);
            break;
        case 'n':
            num_elems = atoi(optarg);
            break;
        case '?':
            if (optopt == 'n' || optopt == 's') {
                fprintf (stderr, "[E] Opcao `-%c' requer argumento.\n", optopt);
            } else if(optopt != 'h') {
                if (isprint (optopt)) {
                    fprintf (stderr, "[E] Opcao `-%c' desconhecida.\n", optopt);
                } else {
                    fprintf (stderr, "[E] Caractere de opcao desconhecido: `\\x%x'.\n", optopt);
                }
            }
        default:
            fprintf(stderr, "[!] Uso:\n\t%s -n <num_elems> [-s <seed>]\n", argv[0]);
            exit(EXIT_FAILURE);
        }
    }

    while(num_elems <= 0) {
        printf("[M] Necessario informar um valor positivo como o numero de elementos para os testes.\n");
        printf("Numero de elementos: ");
        scanf("%d", &num_elems);
    }

    fprintf(stdout, "[L] Usando `%u' como semente inicial de números aleatórios.\n", seed);
    fprintf(stdout, "[L] Usando `%d' como quantidade de elementos.\n", num_elems);

    do_tests(num_elems);

    return 0;
}

//#endif
