#include <stdio.h>
#include <stdlib.h>



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

fclose(myfile);

printf("Checking something. Counter is %d \n",counter);



int *me = malloc(sizeof(int)*counter);

me[1] = 69;
me[2]=240;

printf("my value is %d \n",me[1]);

printf("my value is also %d \n", ii);

return;


}

