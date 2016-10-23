//
// Created by arman on 18/10/2016.
//

#ifndef P1_COMP_READER_H
#define P1_COMP_READER_H

#include <stdio.h>
#include "../external/model/hash.h"
#include <memory.h>

int read_definitions(char *filename);
int load_definitions(char *filename, hashtable_t* table);
int read_file(char *filename);


#endif //P1_COMP_READER_H
