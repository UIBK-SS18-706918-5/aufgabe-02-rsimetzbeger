#include <stdio.h>	// Neue Bibliothek - benötigt für atof
#include <stdlib.h>

int main(int argc, char ** argv) {
	float z1 ;

	// Vergleichswert
z1 = atof(argv[1]);
if (z1>0) 
	printf("x ist positiv \n");
else if (z1<0) 
	printf("x ist negativ \n");
else if (z1==0)
	printf("x ist Null \n");
return 0;
}
