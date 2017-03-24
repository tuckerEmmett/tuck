#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(int argc, const char *argv[]){
printf("Loading in file \n");

FILE *myfile = fopen(argv[1],"r");


int ii = 0;

fscanf(myfile,"%d",&ii);

while (!feof (myfile))

{

	printf("%d \n",ii);

	fscanf(myfile,"%d",&ii);

}

printf("Checking something \n");

printf("My values are %d \n",*ii);


fclose(myfile);

int test[sizeof(ii)/sizeof(int)];

for (unsigned int x = 0; x < sizeof(ii)/sizeof(int); x++)

{

test[x] = ii;
}

printf("And this is the last part %d \n ",*test);
return;


}

