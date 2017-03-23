#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(int argc, const char *argv[]){
printf("Loading in file \n");


FILE *myfile = fopen(argv[1],"r");

int ii = 0;
int *val = malloc(11);
fscanf(myfile,"%d",&ii);


while (!feof(myfile))

{

printf("%d",ii);
*val = fscanf(myfile,"%d",&ii);

}
fclose(myfile);


int add = val(1) + val(2);

printf("added value is %d",add);

printf("Exiting code \n");
return;


}

