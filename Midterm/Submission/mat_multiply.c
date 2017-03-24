#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(int argc, const char *argv[]){
printf("Loading in file \n");

FILE *myfile = fopen(argv[1],"r");


int ii = 0;

fscanf(myfile,"%d",&ii);

int counter = 0;

while (!feof (myfile))

{

	printf("%d \n",ii);

	 fscanf(myfile,"%d",&ii);
	counter++;
}

printf("Checking something. Counter is %d \n",counter);

//printf("My values are %d \n",matrix[5]

int matrix[counter];



fclose(myfile);

return;


}

