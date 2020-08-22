#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	
	char cadena[20]="-Hoy-es-lunes-.";
	int longitud, i;
	
	longitud = strlen(cadena); //longitud de la cadena
	
		printf("\nPALABRA ALREVEZ: ");
		
		for(i=longitud;i>=0;i--){
			printf("%c",cadena[i]);
		}
		
	return 0;
}

