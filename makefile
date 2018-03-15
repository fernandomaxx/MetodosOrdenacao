CC = g++

main:	main.o	insertionSort.o selectionSort.o mergeSort.o simpleQuickSort.o
	$(CC) -o main main.o insertionSort.o selectionSort.o mergeSort.o simpleQuickSort.o





