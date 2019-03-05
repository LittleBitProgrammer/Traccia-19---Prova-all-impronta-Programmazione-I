//
//  main.c
//  Traccia 19 - Prova all'impronta Programmazione I
//
//  Created by Roberto Vecchio on 19/02/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <limits.h>

char lettersOccurence(char *, unsigned long);

int main(int argc, const char * argv[]) {
    
    char phrase[100];
    printf("insert phrase: ");
    fgets(phrase, 4096, stdin);
    
    lettersOccurence(phrase, strlen(phrase));
    
    return 0;
}

char lettersOccurence(char *phrase, unsigned long size){
    int i;
    int count[26] = {0};
    int minLetter = INT_MAX;
    char letter = ' ';
    
    for (i = 0; i < size; i++) {
        count[phrase[i] - 'a']++;
    }
    
    for (i = 0; i < 26; i++){
        if (count[i] < minLetter && count[i]> 0) {
            printf("minore\n con indice [%d] con valore = %d", i, count[i]);
            minLetter = count[i];
            letter = 'a' + i;
        }
    }
    printf("\n\n\n%c\n\n", letter);
    
    return letter;
    
}

