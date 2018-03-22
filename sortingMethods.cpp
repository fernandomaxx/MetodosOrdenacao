
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

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void troca(int *p, int *q)
{
    int aux = *p;
    *p = *q;
    *q = aux;
}

void quickSort(int ar[], int inf, int sup)
{
    int i, j, pivo;
    if (inf >= sup)
        return;

    pivo = inf;

    for (i = inf, j = sup; i < j;) {

        while (ar[i] <= ar[pivo] && i < sup)
            ++i;

        while (ar[j] > ar[pivo])
            --j;

        if (i < j)
            troca(ar + i, ar + j);
    }
    troca(ar + pivo, ar + j);
    quickSort(ar, inf, j - 1);
    quickSort(ar, j + 1, sup);
}

void percolationMax(int ar[], int index, int size){
    int left = 2*index + 1, right = 2*index + 2,
        target = index;

    if (left < size and ar[left] > ar[index])
        target = left;

    if (right < size and ar[right] > ar[target])
        target = right;

    if (target != index) {
        troca(ar + index, ar + target);
        percolationMax(ar, target, size);
    }
}

void heapSort(int ar[], int size)
{
    for (int i = (size-2)/2; i >= 0; i--) {
        percolationMax(ar, i, size);
    }

    for (int i = size-1; i >= 1; i--) {
        troca(ar, ar + i);
        percolationMax(ar, 0, i);
    }
}


