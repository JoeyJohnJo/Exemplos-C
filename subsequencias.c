//
// Created by joeyjohnjo on 19/10/2021.
//

#include <stdio.h>

int getStringLength(char *pointer) {
    int length = 0;
    while(*pointer++ != '\0') {
        length++;
    }
    return length;
}

int main() {
    char n1[11];
    char n2[33];
    int counter = 1;
    while (1) {
        int scan1 = scanf("%[^\n]", n1);
        getchar();
        int scan2 = scanf("%[^\n]", n2);
        getchar();
        if ( (scan1 == EOF) || (scan2 == EOF))
            return 0;

        int i = 0;
        int sizeOfN1 = getStringLength(n1);
        int sizeOfN2 = getStringLength(n2);
        int lastPosition = 0;
        int amountOfSubsequences = 0;
        int remainingCharsEnough = 1;
        while (i < sizeOfN2) {
            char currentLetter = n2[i];
            int sequenceWalker = 0;

            if (currentLetter == n1[sequenceWalker]) {
                 while (sequenceWalker < sizeOfN1 && sequenceWalker != -1) {
                     if (sizeOfN2 - i  < sizeOfN1) {
                         remainingCharsEnough = 0;
                         sequenceWalker = sizeOfN1;
                         continue;
                     }
                     if (n2[i + sequenceWalker] != n1[sequenceWalker]) {
                         sequenceWalker = -1;
                         continue;
                     }
                     sequenceWalker++;
                 }
                 if (sequenceWalker == sizeOfN1 && remainingCharsEnough) {
                     amountOfSubsequences++;
                     lastPosition = i;
                 }
             }

            i++;
        }

        printf("Caso #%d:\n", counter);
        if (amountOfSubsequences > 0) {
            printf("Qtd. Subsequencias: %d\n", amountOfSubsequences);
            printf("Pos: %d\n", lastPosition);
        } else {
            printf("Nao existe subsequencia\n");
        }


        counter++;
    }
}
