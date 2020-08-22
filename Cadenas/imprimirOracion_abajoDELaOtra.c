#include <stdio.h>
#include <conio.h>
#include <string.h>
#define cad 100

int main() {
	
	char cadena[cad]="-Hoy-es-lunes-.-Hoy-es-el-parcial-de-Laboratorio-.-Estudio-programacion-.";
	int longitud, longi, i;
	
	longitud = strlen(cadena); //longitud de la cadena

	for(i=0;i<longitud;i++){ //recorrer la cadena
		if(cadena[i]=='.'){ //si hay un punto entonces saltar la linea y poner el punto
			printf(".\n");
		}else{ //sino
			if(cadena[i]=='-'){  //Si hay "-" entonces sustituimos con un espacio en blanco(opcional)
				printf(" ");
			}
			else{
				printf("%c",cadena[i]); //imprimir las letras
			}
		}
	}
	
	
	
	return 0;
}

