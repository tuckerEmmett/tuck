#include <stdio.h>
#include <stdlib.h>
#include "readHead.h"

void main(int argc, const char*argv[]){


int mata[3][3];
int matb[3][3];


printf("First file is %s\n",argv[1]);
printf("Second file is %s\n",argv[2]);

readfile(&argv[1],1,mata[3][3]);

printf("Values include %d \n",mata[0][2]);


return;

}

