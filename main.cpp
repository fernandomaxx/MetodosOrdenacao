#include <iostream>
#include "sortingMethods.h"

void print(int ar[], int size)
{
	for (int j = 0; j < size; ++j) {
		printf("%d\t ", ar[j]);
	}
	std::cout << "\nOrdenado com sucesso...\n";
}

int main(int argc, char const *argv[])
{
	int N;
	std::cout << "1: insertionSort\t 2: selectionSort \n3: mergeSort\t\t 4: quickSort \n5: heapSort\n";
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


	switch (N) {

		case 1:
			insertionSort(ar, size);
			print(ar, size);
			break;

		case 2:
			selectionSort(ar, size);
			print(ar, size);
			break;

		case 3:
			selectionSort(ar, size);
			print(ar, size);
			break;

		case 4:
			selectionSort(ar, size);
			print(ar, size);
			break;

		case 5:
			heapSort(ar, size);
			print(ar, size);
			break;

		default:
			std::cout << "opcao invalida";

	}

	std::cout << std::endl;
}
