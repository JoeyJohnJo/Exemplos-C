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
    char sentence[499];
    char inverted[499];

    while (1) {
        int scan = scanf("%[^\n]", sentence);
        getchar();
        if ( scan == EOF)
            return 0;

        int size = getStringLength(sentence);
        int counter = size - 1;
        int i = 0;
        while (sentence[counter] != '\0') {
            inverted[i] = sentence[counter];
            counter--;
            i++;
        }
        inverted[size] = '\0';

        printf("%s\n", inverted);
    }
}
