#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char *symbols = " !#@$&*";
const char *encodedSymbols[] = {
    "%20", "%21", "%23", "%40", "%24", "%26", "%2A" 
};

void encodeURL(const char *input, char *output){
    while(*input){
        const char *pos = strchr(symbols, *input);

        if(pos){
            strcpy(output, encodedSymbols[pos - symbols]);
        }
    }
}