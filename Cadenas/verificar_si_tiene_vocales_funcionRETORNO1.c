#include <stdio.h>
#include <conio.h>
#include <string.h>
#define cad 100


int vocal(char cadena);
int main(){
	
	char cadena[cad]="-Hoy-es-lunes-.-Hoy-es-el-parcial-de-Laboratorio-.-Estudio-programacion-.";
	int longitud, longi, i, voca=0;
	
	longitud = strlen(cadena); //longitud de la cadena
	
	
	for(i=0;i<longitud;i++){ //recorre la cadena y llama a la funcion vocales para comparar si hay vocales
		if(vocal(cadena[i])==1){
			voca++;
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
	
