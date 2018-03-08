#include <iostream>
#include "insertionSort.h"
#include "selectionSort.h"

void print(int ar[], int size)
{
	for (int j = 0; j < size; ++j) {
		printf("%d\t ", ar[j]);
	}
	std::cout << "Ordenado com sucesso...\n";
}

int main(int argc, char const *argv[])
{
	int N;
	std::cout << "1: insertionSort\t 2: selectionSort \n";
	std::cin >> N;
	std::cout <<  std::endl;
	freopen("num.1000.1.in", "r", stdin);
	freopen("out", "w", stdout);
	int size, *ar;
	std::cin >> size;
	ar = new int[size];

	for (int i = 0; i < size; ++i) {
		std::cin >> ar[i];
	}

	if (N == 1) {
		insertionSort(ar, size);
		print(ar, size);
	}
	else if (N == 2) {
		selectionSort(ar, size);
		print(ar, size);
	}
	else
		std::cout << "opcao invalida";

	std::cout << std::endl;
}
