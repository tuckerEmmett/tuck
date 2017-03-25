#include <stdio.h>
#include <stdlib.h>
#include "readHead.h"

void main(int argc, const char*argv[]){


printf("First file is %s\n",argv[1]);
printf("Second file is %s\n",argv[2]);

int *vector;

vector = readfile(&argv[1],1,vector);




return;

}

