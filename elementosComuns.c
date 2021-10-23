//
// Created by joeyjohnjo on 19/10/2021.
//

#include <stdio.h>

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int v[], int n){
    int i, j;
    for (i = n - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (v[j] > v[j+1]) {
                swapNumbers(&v[j], &v[j+1]);
            }
        }
    }
}
void populateArrayOfSize(int arraySize, int *pointer) {
    int readCounter = 0;
    while (readCounter < arraySize) {
        scanf("%i", pointer + readCounter);
        readCounter++;
    }
}

void printCommonElementsBetween(int *arrayA, int *arrayB, int sizeOfA, int sizeOfB) {
    int counterA = 0,
        counterB = 0;
    if (sizeOfA > sizeOfB) {
       // arrayA é a maior das duas
       while (counterA < sizeOfA) {

           while (counterB < sizeOfB) {
               int searchingFor = *(arrayA + counterA);
               int currentNum = *(arrayB + counterB);

               if (currentNum == searchingFor) {
                   printf("%d ", searchingFor);
               }

               counterB++;
           }
           counterA++;
           counterB = 0;
       }
    } else {
        // arrayB é a maior
        while (counterB < sizeOfB) {
            while (counterA < sizeOfA) {
                int searchingFor = *(arrayB + counterB);
                int currentNum = *(arrayA + counterA);

                if (currentNum == searchingFor) {
                    printf("%d ", searchingFor);
                }

                counterA++;
            }
            counterB++;
            counterA = 0;
        }
    }
    printf("\n");
}

int main() {
    int numberOfTestCases;
    scanf("%i", &numberOfTestCases);

    int counter = 0;
    while (counter < numberOfTestCases) {
        int numberOfElementsInFirstArray;
        scanf("%i", &numberOfElementsInFirstArray);

        int firstArray[numberOfElementsInFirstArray];
        populateArrayOfSize(numberOfElementsInFirstArray, firstArray);

        int numberOfElementsInSecondArray;
        scanf("%i", &numberOfElementsInSecondArray);

        int secondArray[numberOfElementsInSecondArray];
        populateArrayOfSize(numberOfElementsInSecondArray, secondArray);
        bubbleSort(firstArray, numberOfElementsInFirstArray);
        bubbleSort(secondArray, numberOfElementsInSecondArray);

        printCommonElementsBetween(firstArray, secondArray, numberOfElementsInFirstArray, numberOfElementsInSecondArray);

        counter++;
    }
}
