#include <stdio.h>
#include <conio.h>
#include <string.h>
#define cad 100


int vocal(char cadena);
int main() {
	
	char cadena[cad]="-Hoy-es-lunes-.-Hoy-es-el-parcial-de-Laboratorio-.-Estudio-programacion-.";
	int longitud, longi, i, voca=0;
	
	longitud = strlen(cadena); //longitud de la cadena
	longi = sizeof(cadena);//dimension de la cadena
	
	if(longitud == longi){ //compara la longitud y la dimension
		printf("La longitud de la cadena es igual a su dimension.\n");
	}
	else{
		printf("La longitud de la cadena es distinta a su dimension.\n");
	}
	
	
	for(i=0;i<longitud;i++){ //imprime una oracion debajo de la otra
		if(cadena[i]=='.'){
			printf(".\n");
		}else{
			if(cadena[i]=='-'){//LE SACA LA "-" PARA QUE IMPRIMA NORMAL
				printf(" ");//EN VEZ DE - PONE UN ESPACIO
			}
			else{
			printf("%c",cadena[i]);
			}
		}
	}
	
	for(i=0;i<longitud;i++){ //recorre la cadena y llama a la funcion vocales para comparar si hay vocales
		if(vocal(cadena[i])==1){//COMPARA EL RETORNO DE LA FUNCION VOCAL CON 1
			voca++; //SI ES 1 CUENTA ASI SABEMOS CUANTAS VOCALES SON
		}
	}
	
	printf("Hay %d vocales",voca);
	
	return 0;
}

int vocal(char cadena){ //funcion que devuelve un 1 si hay una vocal
	int j;
	char vocales[5]={'a','e','i','o','u'};
	
	for(j=0;j<5;j++){
		if(cadena==vocales[j]){ //compara la letra con las vocales
			return 1;
		}
	}

}
