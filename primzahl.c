#include <stdio.h>	// Neue Bibliothek - benötigt für atof
#include <stdlib.h>

int main(int argc, char ** argv)
{
    
    int a;
    float b;
    int i;
    if(argc == 2 )
    {
        a = atol(argv[1]);
        for(i = 2; i <= a; i++)
        {
            b =a % i;
            if (b == 0 && a !=i)
            {
                printf("%i ist keine Primzahl \n" , a);
                break;
            }
            if (i == a)
            {
                printf("%i ist Primzahl \n" , a);
                       }
                       }
                       }
                  
       else
                {
           printf("Falsche Eingabe \n");
       }
       return 0;
       }
       
       
