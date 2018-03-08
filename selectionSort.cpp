#include "selectionSort.h"

void selectionSort (int ar[], int size)
{
    int aux, index, i, j;

    for (i = size - 1; i > 0 ; --i) {
        aux = ar[0]; /*o aux tem como objetivo armazenar o maior valor do vetor
                      *entre as posições [0, i]
                       indice do maior valor do vetor*/
        index = 0;

        for (j = 1; j <= i; ++j) {

            /* O vetor será pecorrido afim de se verificar se existe algum valor maior
             * que aux (suposto valor maior), se sim aux recebera o novo valor maior e
             * index a posição dele
             */
            if (ar[j] > aux) {
                aux = ar[j];
                index = j;
            }
        }

        ar[index] = ar[i]; /* A pos do maior vetor recebe o valor da pos i */
        ar[i] = aux;       /* e a pos i recebe o maior valor entre [0, i],
                            * dessa forma os maiores valores são amazenados
                            * de forma ordenada entre as posições [i, size - 1]
                            */

    }
}