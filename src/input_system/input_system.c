//
// Created by Snooze on 24/10/2016.
//

#include "input_system.h"

FILE *working_file = NULL;
char c = '\0';

int setFile(char *filename){
    working_file = fopen(filename, "r");
    printf("Reading %s\n", filename);

    if (working_file == NULL) {
        return -1;
    } else {
        return 0;
    }
}

char getChar(){
    if (working_file != NULL) {
        if (c != '\0'){
            char j = c;
            c = '\0';
            return j;
        } else {
            return (char) getc(working_file);
        }
    } else {
        return EOF;
    }
}

char putChar(char a){
    c = a;
    return c;
}

void closeFile(){
    fclose(working_file);
    working_file = NULL;
}