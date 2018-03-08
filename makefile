CC = g++

main:	main.o	insertionSort.o selectionSort.o
	$(CC) -o main main.o insertionSort.o selectionSort.o





