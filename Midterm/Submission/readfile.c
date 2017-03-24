#include <stdio.h>
#include <stdlib.h>
#include "readHead.h"
#include <string.h>

void readfile(const char *argv[], int whichinput){
printf("Loading in file \n");

FILE *matrixOne = fopen(argv[whichinput],"r");

int m,n;
fscanf(matrixOne,"%d",&m);
fscanf(matrixOne,"%d",&n);

printf("M is %d \n",m);
printf("N is %d \n",n);
printf("Therefore matrix is a %d by %d matrix\n",m,n);
 
int line[m][n];



for (int ii =0; ii<m; ii++){

	for (int jj = 0; jj < n-1; jj++){

	fscanf(matrixOne,"%d",&line[ii][jj]);


	}

fscanf(matrixOne,"%d",&line[ii][n-1]);



}

//Important to remember that all indices are less one. I.E index 1,3 in a matrix is rep'd by 0,2 in C.
printf("End of readfile() \n");
fclose(matrixOne);
return;


}
