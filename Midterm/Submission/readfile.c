#include <stdio.h>
#include <stdlib.h>



void readfile(int argc, const char *argv[]){
printf("Loading in file \n");

FILE *myfile = fopen(argv[1],"r");


int m, n;
fscanf(myfile,"%d",&m);
fscanf(myfile,"%d",&n); 


printf("M is %d \n",m);
printf("N is %d \n",n);
printf("Therefore matrix is a %d by %d matrix",m,n);
 
int line[m][n];


for (int ii =0; ii<m; ii++){

	for (int jj = 0; jj < n-1; jj++){

	fscanf(myfile,"%d",&line[ii][jj]);


	}

fscanf(myfile,"%d",&line[ii][n-1]);



}

//int *me = malloc(sizeof(int)*counter);

printf("Testing matrix values %d \n", line[0][0]);

printf("testing value two %d \n", line[1][1]);

int val;
//Important to remember that all indices are less one. I.E index 1,3 in a matrix is rep'd by 0,2 in C.




printf("Val equals %d \n",val);
fclose(myfile);
return;


}

