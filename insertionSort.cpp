#include "insertionSort.h"

void insertionSort(int ar[], int size)
{
    int aux;

    /* A primeira posição do vetor é considerada como a parte ordenada, então
     * o laço se inicia em sua segunda posição. Logo em seguida uma variável auxiliar
     * armazena a primeira posição da região desordenada "i" e são feitas comparações afim
     * de se encontrar elementos maiores que a auxiliar.
     */

    for (int i = 1; i < size; ++i) {
        aux = ar[i];
        int j = i - 1;

        /* Se algum valor maior que aux for encontrado será movimentado uma posição
         * para direita. o j só é menor que 0 quando todos os elementos da região
         * ordenada forem maior que aux.
         */

        while (j >= 0 && aux < ar[j]) {
            ar[j + 1] = ar[j];
            j--;
        }

        ar[j + 1] = aux; /* aux é inserida na sua posição correta */
    }
}

