
#include <stdio.h>	// Neue Bibliothek - benötigt für atof
#include <stdlib.h>

int main(int argc, char ** argv) {
	

    if (argc == 2) {
    int f, i ;
	int s = 1;
	 

	// Einlesen der Variable
f = atof(argv[1]);

	// Fakultät berechnen
	for (i = 1;i <= f; i++)
		s = i*s;
	//Ausgabe
	printf("Fakultaet von %i ist %i \n",f,s);
	printf("Anzahl der Bytes von zahl: %lu", sizeof(s)); }
    
    else {
        printf("bitte genau einen Parameter Ausgebebn \n");
    }
return 0;
}
//Fakultät bis inklusive 12 berechnebar

